
#include <web_server.h>

// 计时器变量
unsigned long lastTime = 0;
unsigned long lastTimeTemperature = 0;
unsigned long lastTimeAcc = 0;
unsigned long gyroDelay = 10;
unsigned long temperatureDelay = 1000;
unsigned long accelerometerDelay = 200;

WebServer::WebServer(IMU imu) { imu_ = imu; }

void WebServer::init() {
  // 处理 Web Server
  server_.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(SPIFFS, "/index.html", "text/html");
  });

  server_.serveStatic("/", SPIFFS, "/");
  auto imu = imu_;

  server_.on("/reset", HTTP_GET, [&imu](AsyncWebServerRequest *request) {
    imu.setGyroX(0.0);
    imu.setGyroY(0.0);
    imu.setGyroZ(0.0);
    request->send(200, "text/plain", "OK");
  });

  server_.on("/resetX", HTTP_GET, [&imu](AsyncWebServerRequest *request) {
    imu.setGyroX(0.0);
    request->send(200, "text/plain", "OK");
  });

  server_.on("/resetY", HTTP_GET, [&imu](AsyncWebServerRequest *request) {
    imu.setGyroY(0.0);
    request->send(200, "text/plain", "OK");
  });

  server_.on("/resetZ", HTTP_GET, [&imu](AsyncWebServerRequest *request) {
    imu.setGyroZ(0.0);
    request->send(200, "text/plain", "OK");
  });

  // 处理 Web Server Events
  events_.onConnect([](AsyncEventSourceClient *client) {
    if (client->lastId()) {
      Serial.printf("Client reconnected! Last message ID that it got is: %un",
                    client->lastId());
    }
    // 消息为“ hello！”的结束事件，id为当前毫秒
    // 并将重新连接延迟设置为1秒
    client->send("hello!", NULL, millis(), 10000);
  });
  server_.addHandler(&events_);

  server_.begin();
}

void WebServer::update() {
  if ((millis() - lastTime) > gyroDelay) {
    // 通过传感器读数将事件发送到Web服务器
    events_.send(imu_.getGyroReadings().c_str(), "gyro_readings", millis());
    lastTime = millis();
  }
  if ((millis() - lastTimeAcc) > accelerometerDelay) {
    // 通过传感器读数将事件发送到Web服务器
    events_.send(imu_.getAccReadings().c_str(), "accelerometer_readings",
                 millis());
    lastTimeAcc = millis();
  }
  if ((millis() - lastTimeTemperature) > temperatureDelay) {
    // 通过传感器读数将事件发送到Web服务器
    events_.send(imu_.getTemperatureStr().c_str(), "temperature_reading",
                 millis());
    lastTimeTemperature = millis();
  }
}
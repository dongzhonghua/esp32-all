
#include <web_server.h>

#include "sd_card.h"

extern IMU mpu;

// 计时器变量
unsigned long lastTime = 0;
unsigned long lastTimeTemperature = 0;
unsigned long lastTimeAcc = 0;
unsigned long gyroDelay = 10;
unsigned long temperatureDelay = 1000;
unsigned long accelerometerDelay = 200;

WebServer::WebServer(IMU imu) { imu_ = imu; }

// 官方文档写的非常详细了 https://github.com/me-no-dev/ESPAsyncWebServer

// TODO SD卡服务器暂时告一段落，也没必要花那么长时间去搞这个，后面应该重点搞成一个REST的形式
// 单片机里保留前端的应该只有很少的核心功能：
// 1. WIFI配网
// 2. 
// 具体可以参考：https://github.com/heluoly/ESP32-SDcard-WebServer

void WebServer::init() {
  server_.on("^\\/src\\/([a-zA-Z_.-0-9]+)$", HTTP_GET, [](AsyncWebServerRequest *request) {
    String path = request->pathArg(0);
    String contentType = request->contentType();
    Serial.println(path);
    Serial.println(contentType);
    File contentFile = SD.open("/www/" + path);  //从SD卡读取文件
    if (!contentFile) {
      Serial.println("404");
      request->send(404, "text/plain", "访问失败");
      return;
    }
    size_t contentLength = contentFile.size();
    Serial.println(contentLength);
    request->send(contentFile, contentType, contentLength);  //向客户端发送文件
    contentFile.close();
  });

  server_.on("^\\/(\\w+\\.\\w+)$", HTTP_GET, [](AsyncWebServerRequest *request) {
    String path = request->pathArg(0);
    String contentType = request->contentType();
    Serial.println(path);
    Serial.println(contentType);
    File contentFile = SD.open("/www/" + path);  //从SD卡读取文件
    if (!contentFile) {
      Serial.println("404");
      request->send(404, "text/plain", "访问失败");
      return;
    }
    size_t contentLength = contentFile.size();
    Serial.println(contentLength);
    request->send(contentFile, contentType, contentLength);  //向客户端发送文件
    contentFile.close();
  });

  // 处理 Web Server
  server_.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    File contentFile = SD.open("/www/index.html");  //从SD卡读取文件
    if (!contentFile) {
      Serial.println("404");
      request->send(404, "text/plain", "访问失败");
      return;
    }
    String contentType = "text/html";  // Content-Type
    size_t contentLength = contentFile.size();
    Serial.println(contentLength);
    request->send(contentFile, contentType, contentLength);  //向客户端发送文件
    contentFile.close();
  });

  server_.on("/mpu", HTTP_GET, [](AsyncWebServerRequest *request) {
    File contentFile = SD.open("/www/mpu.html");  //从SD卡读取文件
    if (!contentFile) {
      Serial.println("404");
      request->send(404, "text/plain", "访问失败");
      return;
    }
    String contentType = "text/html";  // Content-Type
    size_t contentLength = contentFile.size();
    Serial.println(contentLength);
    request->send(contentFile, contentType, contentLength);  //向客户端发送文件
    contentFile.close();
  });
  // 这种方式使用SPIFFS
  // server_.serveStatic("/", SPIFFS, "/");

  server_.on("/reset", HTTP_GET, [](AsyncWebServerRequest *request) {
    mpu.setGyroX(0.0);
    mpu.setGyroY(0.0);
    mpu.setGyroZ(0.0);
    request->send(200, "text/plain", "OK");
  });

  server_.on("/resetX", HTTP_GET, [](AsyncWebServerRequest *request) {
    mpu.setGyroX(0.0);
    request->send(200, "text/plain", "OK");
  });

  server_.on("/resetY", HTTP_GET, [](AsyncWebServerRequest *request) {
    mpu.setGyroY(0.0);
    request->send(200, "text/plain", "OK");
  });

  server_.on("/resetZ", HTTP_GET, [](AsyncWebServerRequest *request) {
    mpu.setGyroZ(0.0);
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
    events_.send(mpu.getGyroReadings().c_str(), "gyro_readings", millis());
    lastTime = millis();
  }
  if ((millis() - lastTimeAcc) > accelerometerDelay) {
    // 通过传感器读数将事件发送到Web服务器
    events_.send(mpu.getAccReadings().c_str(), "accelerometer_readings",
                 millis());
    lastTimeAcc = millis();
  }
  if ((millis() - lastTimeTemperature) > temperatureDelay) {
    // 通过传感器读数将事件发送到Web服务器
    events_.send(mpu.getTemperatureStr().c_str(), "temperature_reading",
                 millis());
    lastTimeTemperature = millis();
  }
}
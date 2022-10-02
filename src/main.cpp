#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

#include "imu.h"
#include "network.h"
#include "ota.h"
#include "ssd1306.h"
#include "utils/bilibili.h"
#include "utils/common_utils.h"

void ssd1306_display(int interval = 4000);

IMU mpu;
Network wifi;
SSD1306 ssd1306;
OTA ota;

void setup() {
  Serial.begin(115200);
  chip_info();

  mpu.init();
  if (1) {
    wifi.init();
  }
  displayWeather(wifi.openWeather());
  ssd1306.init();

  ota.initOTA();
}

void loop() {
  mpu.update(false);
  ssd1306_display();

  ota.handle();
  delay(200);
}

void ssd1306_display(int interval) {
  if (millis() - ssd1306.lastUpdateTime() > 2 * interval) {
    ssd1306.setLastUpdateTime(millis());
  }

  if (millis() - ssd1306.lastUpdateTime() > interval) {
    ssd1306.getDisplay()->clearDisplay();
    ssd1306.getDisplay()->setCursor(0, 0);

    ssd1306.getDisplay()->println("Accelerometer - m/s^2");
    ssd1306.getDisplay()->print(mpu.getAccelX(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getAccelY(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getAccelZ(), 1);
    ssd1306.getDisplay()->println("");

    ssd1306.getDisplay()->println("Gyroscope - rps");
    ssd1306.getDisplay()->print(mpu.getGyroX(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getGyroY(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getGyroZ(), 1);
    ssd1306.getDisplay()->println("");

    ssd1306.getDisplay()->display();
  } else {
    ssd1306.getDisplay()->clearDisplay();
    ssd1306.getDisplay()->setCursor(0, 0);
    ssd1306.getDisplay()->println(wifi.getIpStr());
    ssd1306.getDisplay()->println(wifi.getTime());

    ssd1306.getDisplay()->print("Heap: ");
    ssd1306.getDisplay()->print(ESP.getFreeHeap());
    ssd1306.getDisplay()->print(" / ");
    ssd1306.getDisplay()->print(ESP.getHeapSize());
    // todo cpu利用率
    ssd1306.getDisplay()->print("CPU: ");
    ssd1306.getDisplay()->print(ESP.getCpuFreqMHz());
    ssd1306.getDisplay()->print(" / ");
    ssd1306.getDisplay()->print(ESP.getChipCores());
    ssd1306.getDisplay()->println("");

    ssd1306.getDisplay()->display();
  }

  // ssd1306.getDisplay()->clearDisplay();
  // ssd1306.getDisplay()->drawBitmap(0, 0, epd_bitmap_16_2x, 64, 64, WHITE);
  // ssd1306.getDisplay()->display();
}
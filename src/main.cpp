#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <ArduinoJson.h>

#include <fstream>
#include <iostream>

#include "imu.h"
#include "network.h"
#include "ota.h"
#include "screen.h"
#include "spi_ffs.h"
#include "ssd1306.h"
#include "utils/common_utils.h"
#include "utils/pic.h"
#include "web_server.h"
IMU mpu;
Network wifi;
SSD1306 ssd1306;
OTA ota;
Display screen;
SPI_FFS spi_ffs;

WebServer web_server(mpu);

void setup() {
  Serial.begin(115200);  // 初始化串口
  // ---ota初始化，上面写具体逻辑---
  // ota.init();
  // chip_info();     // 打印芯片信息
  spi_ffs.init();
  listDir("/", 2);
  mpu.init();      // 初始化mpu6050
  wifi.init();     // 初始化网络
  ssd1306.init();  // 12864初始化
  web_server.init(); // 初始化web和sse server
  // lvgl初始化
  // screen.init();
  // screen.demoInit();

}

void loop() {
  // ---ota 上面写具体的逻辑---
  // ota.handle();

  mpu.update(false);
  ssd1306_display(ssd1306, mpu, wifi);
  // screen.routine();
  web_server.update();

  delay(10);
}
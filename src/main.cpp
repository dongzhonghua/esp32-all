#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

#include "imu.h"
#include "network.h"
#include "ota.h"
#include "screen.h"
#include "ssd1306.h"
#include "utils/common_utils.h"
#include "utils/pic.h"


IMU mpu;
Network wifi;
SSD1306 ssd1306;
OTA ota;
Display screen;
void setup() {
  Serial.begin(115200);  // 初始化串口
  chip_info();           // 打印芯片信息
  // mpu.init();            // 初始化mpu6050
  // wifi.init();           // 初始化网络
  // ssd1306.init();        // 12864初始化

  screen.init();

  screen.demoInit();
  // ---ota初始化，上面写具体逻辑---
  // ota.init();
}

void loop() {
  // mpu.update(false);
  // ssd1306_display(ssd1306, mpu, wifi);
  screen.routine();

  // ---ota 上面写具体的逻辑---
  // ota.handle();
  delay(200);
}
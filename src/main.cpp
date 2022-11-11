#include <Arduino.h>

// #include "imu.h"
#include "network.h"
// #include "ota.h"
// #include "sd_card.h"
#include "screen.h"
// #include "spi_ffs.h"
// #include "ssd1306.h"
// #include "utils/common_utils.h"
// #include "utils/pic.h"
// #include "web_server.h"
#include "rgb_led.h"

// IMU mpu;
Network wifi;
// SSD1306 ssd1306;
// OTA ota;
Display screen;
// SPI_FFS spi_ffs;
// SdCard tf;
Pixel rgb;


// WebServer web_server(mpu);

void setup() {
  Serial.begin(115200);  // 初始化串口
  // ---ota初始化，上面写具体逻辑---
  // ota.init();

  rgb.init();
  rgb.setBrightness(0.1).setRGB(0, 0, 255, 0);

  // chip_info();     // 打印芯片信息
  // spi_ffs.init();
  // listDir("/", 2);
  // mpu.init();      // 初始化mpu6050
  // wifi.init();     // 初始化网络
  // ssd1306.init();  // 12864初始化
  // web_server.init(); // 初始化web和sse server
  // lvgl初始化
  screen.init();
  screen.demoInit();
  // tf.init();




}

void loop() {
  // ---ota 上面写具体的逻辑---
  // ota.handle();

  // mpu.update(true);
  // ssd1306_display(ssd1306, mpu, wifi);
  screen.routine();
  // web_server.update();
  rgb.setRainbow(0, 0.03);
  delay(100);
}
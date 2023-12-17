#include <Arduino.h>

#include "imu.h"
#include "network.h"
// #include "ota.h"
#include "screen.h"
#include "sd_card.h"
// #include "spi_ffs.h"
// #include "ssd1306.h"
// #include "utils/common_utils.h"
// #include "utils/pic.h"
#include <esp32-hal-timer.h>
#include <esp32-hal.h>

#include "rgb_led.h"
#include "sys/app_controller.h"
#include "ui/weather/weather.h"
#include "ui/setting/setting.h"
#include "ui/bilibili/bilibili.h"
#include "web_server.h"

My_MPU6050 mpu;
Network wifi;
// SSD1306 ssd1306;
// OTA ota;
Display screen;
// SPI_FFS spi_ffs;
SdCard tf;
Pixel rgb;

WebServer web_server;

AppController *app_controller;  // APP控制器

ImuAction *act_info;  // 存放mpu6050返回的数据

static bool isCheckAction = false;
TimerHandle_t xTimerAction = NULL;
// 标志需要检测动作
void actionCheckHandle(TimerHandle_t xTimer) { isCheckAction = true; }

void setup() {
  Serial.begin(115200);  // 初始化串口
  // ---ota初始化，上面写具体逻辑---
  // ota.init();

  rgb.init();
  rgb.setBrightness(0.1).setRGB(0, 0, 255, 0);

  // chip_info();     // 打印芯片信息
  // spi_ffs.init();
  // listDir("/", 2);
  mpu.init();  // 初始化mpu6050

  tf.init();
  // tf.listDir("/", 2);

  // lvgl初始化
  screen.init();
  // screen.demoInit();

  // 初始化 app controller状态
  app_controller = new AppController();  // APP控制器
  app_controller->read_config(&app_controller->sys_cfg);
  app_controller->read_config(&app_controller->mpu_cfg);
  app_controller->read_config(&app_controller->rgb_cfg);
  app_controller->init();

  // 将APP"安装"到controller里
  app_controller->app_install(&weather_app);
  app_controller->app_install(&bilibili_app);
  app_controller->app_install(&setting_app);
  // app_controller->app_install(&picture_app);

  // 可以设置默认的自启动APP
  app_controller->app_auto_start();

  wifi.init();  // 初始化网络
  // ssd1306.init();  // 12864初始化
  // web_server.init();  // 初始化web和sse server

  // 先初始化一次动作数据 防空指针
  act_info = mpu.getAction();

  // 定义一个mpu6050的动作检测定时器
  xTimerAction = xTimerCreate("Action Check", 200 / portTICK_PERIOD_MS, pdTRUE,
                              (void *)0, actionCheckHandle);
  xTimerStart(xTimerAction, 0);
  Serial.println("init success...");
}

void loop() {
  // ---ota 上面写具体的逻辑---
  // ota.handle();

  screen.routine();

  mpu.update(false);
  // ssd1306_display(ssd1306, mpu, wifi);

  // web_server.update();


  if (isCheckAction) {
    isCheckAction = false;
    act_info = mpu.getAction();
  }
  app_controller->main_process(act_info);  // 运行当前进程
  // delay(100);
}
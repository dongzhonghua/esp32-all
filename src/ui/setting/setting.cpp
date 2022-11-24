#include "ui/setting/setting.h"

#include <esp32-hal-timer.h>

#include <map>

#include "ArduinoJson.h"
#include "ESP32Time.h"
#include "common.h"
#include "network.h"
#include "sys/app_controller.h"
#include "ui/setting/settings_gui.h"
#define SETTING_APP_NAME "Setting"

// static void task_update(void *parameter);  // 异步更新任务

static int setting_init(AppController *sys) {
  Serial.println("===================a");
  printf("==============aa \n");
  // 初始化运行时的参数
  settings_gui_init();
  Serial.println("===================b");

  display_settings(AIO_VERSION, "v 2.3.0", LV_SCR_LOAD_ANIM_NONE);
  Serial.println("===================c");

  return 0;
}

static void setting_process(AppController *sys, const ImuAction *act_info) {
  if (RETURN == act_info->active) {
    sys->app_exit();
    return;
  } else if (GO_FORWORD == act_info->active) {
  } else if (TURN_RIGHT == act_info->active) {
  } else if (TURN_LEFT == act_info->active) {
  }
}

static int setting_exit_callback(void *param) {
  settings_gui_del();

  // 释放运行数据
  // if (NULL != run_data) {
  //   free(run_data);
  //   run_data = NULL;
  // }
  return 0;
}

static void setting_background_task(AppController *sys,
                                    const ImuAction *act_info) {
  // 本函数为后台任务，主控制器会间隔一分钟调用此函数
  // 本函数尽量只调用"常驻数据",其他变量可能会因为生命周期的缘故已经释放
}

static void setting_message_handle(const char *from, const char *to,
                                   APP_MESSAGE_TYPE type, void *message,
                                   void *ext_info) {}

APP_OBJ setting_app = {
    SETTING_APP_NAME,      &app_settings,         "",
    setting_init,          setting_process,       setting_background_task,
    setting_exit_callback, setting_message_handle};
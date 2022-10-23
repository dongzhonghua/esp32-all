/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

lv_event_code_t LV_EVENT_RETURN;

void events_init(lv_ui *ui);

// 屏幕切换事件
void events_init_screen_main(lv_ui *ui);
void events_init_screen_settings(lv_ui *ui);
void events_init_screen_menu(lv_ui *ui);
void events_init_screen_weather(lv_ui *ui);

// 按钮事件

// 主屏幕事件
void events_init_screen_main_button(lv_ui *ui);

// 菜单屏幕按钮事件
void events_init_screen_menu_setting_button(lv_ui *ui);
void events_init_screen_menu_home_button(lv_ui *ui);
void events_init_screen_menu_weather_button(lv_ui *ui);
void events_init_screen_menu_bilibili_button(lv_ui *ui);



#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
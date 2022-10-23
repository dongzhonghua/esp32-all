/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "guider_fonts/guider_fonts.h"
#include "lvgl.h"

typedef struct {
  // 主屏幕
  lv_obj_t *screen_main;

  lv_obj_t *screen_main_animimg_1;
  lv_obj_t *screen_main_img_1;
  lv_obj_t *screen_main_label_1;
  lv_obj_t *screen_main_label_2;
  lv_obj_t *screen_main_img_2;
  lv_obj_t *screen_main_img_3;

  // 设置屏幕
  lv_obj_t *screen_settings;

  lv_obj_t *screen_settings_line_1;

  // 菜单屏幕
  lv_obj_t *screen_menu;

  lv_obj_t *screen_menu_home_btn;
  lv_obj_t *screen_menu_home_label;

  lv_obj_t *screen_menu_weather_btn;
  lv_obj_t *screen_menu_weather_label;

  lv_obj_t *screen_menu_setting_btn;
  lv_obj_t *screen_menu_setting_label;

  lv_obj_t *screen_menu_bilibili_btn;
  lv_obj_t *screen_menu_bilibili_label;

  // 天气屏幕
  lv_obj_t *screen_weather;

  lv_obj_t *screen_weather_img_1;
} lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;

void setup_scr_screen_main(lv_ui *ui);

#include "src/extra/widgets/animimg/lv_animimg.h"
LV_IMG_DECLARE(screen_main_animimg_1a1)
LV_IMG_DECLARE(screen_main_animimg_1a2)
LV_IMG_DECLARE(screen_main_animimg_1a3)
LV_IMG_DECLARE(screen_main_animimg_1a4)
LV_IMG_DECLARE(screen_main_animimg_1a5)
LV_IMG_DECLARE(screen_main_animimg_1a6)
LV_IMG_DECLARE(screen_main_animimg_1a7)
LV_IMG_DECLARE(screen_main_animimg_1a8)
LV_IMG_DECLARE(screen_main_animimg_1a9)
LV_IMG_DECLARE(screen_main_animimg_1a10)
LV_IMG_DECLARE(screen_main_animimg_1a11)
LV_IMG_DECLARE(screen_main_animimg_1a12)
LV_IMG_DECLARE(screen_main_animimg_1a13)
LV_IMG_DECLARE(screen_main_animimg_1a14)

void setup_scr_screen_settings(lv_ui *ui);
void setup_scr_screen_menu(lv_ui *ui);
void setup_scr_screen_weather(lv_ui *ui);

LV_IMG_DECLARE(_temprature_16x16);
LV_IMG_DECLARE(_humidity_16x16);
LV_IMG_DECLARE(_setting_alpha_100x100);
LV_IMG_DECLARE(_weather_alpha_100x100);
LV_IMG_DECLARE(_love_alpha_100x100);
LV_IMG_DECLARE(_bilibili_alpha_100x100);
LV_IMG_DECLARE(_7_2x_60x60);
LV_IMG_DECLARE(_37_2x_100x100);

#ifdef __cplusplus
}
#endif
#endif
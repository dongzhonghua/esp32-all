/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */
#include <stdio.h>

#include "astronaut1.h"
#include "astronaut12.h"
#include "astronaut14.h"
#include "astronaut3.h"
#include "astronaut5.h"
#include "astronaut7.h"
#include "astronaut9.h"
#include "events_init.h"
#include "gui_guider.h"
#include "lvgl.h"

LV_IMG_DECLARE(astronaut1);
LV_IMG_DECLARE(astronaut3);
LV_IMG_DECLARE(astronaut5);
LV_IMG_DECLARE(astronaut7);
LV_IMG_DECLARE(astronaut9);
LV_IMG_DECLARE(astronaut12);
LV_IMG_DECLARE(astronaut14);

static const lv_img_dsc_t* astronauts_anim_imgs[7] = {
    &astronaut1, &astronaut3,  &astronaut5, &astronaut7,
    &astronaut9, &astronaut12, &astronaut14};

void setup_scr_screen_picture(lv_ui* ui) {
  // Write codes screen_picture
  ui->screen_picture = lv_obj_create(NULL);

  // Write style state: LV_STATE_DEFAULT for
  // style_screen_picture_main_main_default
  static lv_style_t style_screen_picture_main_main_default;
  if (style_screen_picture_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_picture_main_main_default);
  else
    lv_style_init(&style_screen_picture_main_main_default);
  lv_style_set_bg_color(&style_screen_picture_main_main_default,
                        lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_bg_opa(&style_screen_picture_main_main_default, 0);
  lv_obj_add_style(ui->screen_picture, &style_screen_picture_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  // 复选框
  // ui->cb = lv_checkbox_create(ui->screen_picture);
  // lv_checkbox_set_text(ui->cb, "book");             //设置控件名称
  // lv_obj_align(ui->cb, LV_ALIGN_CENTER, -40, -40);  //居中显示
	
  ui->animimg1 = lv_animimg_create(ui->screen_picture);  //动画1
  lv_obj_center(ui->animimg1);                                     //居中
  lv_animimg_set_src(ui->animimg1, (lv_img_decoder_t**)astronauts_anim_imgs, 7);
  lv_animimg_set_duration(ui->animimg1, 500);
  lv_animimg_set_repeat_count(ui->animimg1, LV_ANIM_REPEAT_INFINITE);
  lv_animimg_start(ui->animimg1);

  events_init_screen_picture(ui);
}
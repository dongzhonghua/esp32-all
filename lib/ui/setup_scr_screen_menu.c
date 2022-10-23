/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include <stdio.h>

#include "custom.h"
#include "events_init.h"
#include "gui_guider.h"
#include "lvgl.h"

void setup_scr_screen_menu(lv_ui* ui) {
  // Write codes screen_menu
  ui->screen_menu = lv_obj_create(NULL);

  // // Write style state: LV_STATE_DEFAULT for
  // style_screen_menu_main_main_default static lv_style_t
  // style_screen_menu_main_main_default; if
  // (style_screen_menu_main_main_default.prop_cnt > 1)
  //   lv_style_reset(&style_screen_menu_main_main_default);
  // else
  //   lv_style_init(&style_screen_menu_main_main_default);
  // lv_style_set_bg_color(&style_screen_menu_main_main_default,
  //                       lv_color_make(0x00, 0x00, 0x00));
  // lv_style_set_bg_opa(&style_screen_menu_main_main_default, 255);
  // lv_obj_add_style(ui->screen_menu, &style_screen_menu_main_main_default,
  //                  LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_set_size(ui->screen_menu, LV_PCT(100), LV_PCT(100));
  lv_obj_set_scrollbar_mode(ui->screen_menu, LV_SCROLLBAR_MODE_OFF);
  lv_obj_set_flex_flow(ui->screen_menu, LV_FLEX_FLOW_ROW);
  lv_obj_set_flex_align(ui->screen_menu, LV_FLEX_ALIGN_CENTER,
                        LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
  lv_obj_set_scroll_snap_x(ui->screen_menu, LV_SCROLL_SNAP_CENTER);
  lv_obj_set_style_bg_opa(ui->screen_menu, LV_OPA_0, LV_PART_MAIN);
  lv_obj_set_style_bg_color(ui->screen_menu, lv_color_black(), LV_PART_MAIN);
  lv_obj_set_style_border_width(ui->screen_menu, 0, LV_PART_MAIN);
  lv_obj_set_style_pad_column(ui->screen_menu, 30,
                              LV_PART_MAIN);  //图标之间的间隙
  lv_obj_center(ui->screen_menu);

// 主页按钮
  ui->screen_menu_home_btn = lv_imgbtn_create(ui->screen_menu);
  // lv_obj_set_size(ui->screen_menu_home_btn, 100, 100);
  // lv_obj_t* label1 = lv_label_create(ui->screen_menu_home_btn);
  // lv_label_set_text_fmt(label1, "%s", "home");
  // lv_obj_center(label1);

	// lv_imgbtn_set_src(ui->screen_menu_home_btn, LV_IMGBTN_STATE_RELEASED, NULL, &_love_alpha_100x100, NULL);
	// lv_imgbtn_set_src(ui->screen_menu_home_btn, LV_IMGBTN_STATE_PRESSED, NULL, &_love_alpha_100x100, NULL);
	// lv_imgbtn_set_src(ui->screen_menu_home_btn, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_love_alpha_100x100, NULL);
	// lv_imgbtn_set_src(ui->screen_menu_home_btn, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_love_alpha_100x100, NULL);
	// // lv_imgbtn_set_toggle(ui->screen_menu_home_btn, true);
	lv_obj_add_flag(ui->screen_menu_home_btn, LV_OBJ_FLAG_CHECKABLE);
	lv_obj_add_flag(ui->screen_menu_home_btn, LV_OBJ_FLAG_CLICKABLE);

    lv_imgbtn_set_src(ui->screen_menu_home_btn, LV_IMGBTN_STATE_RELEASED, &_love_alpha_100x100, &_love_alpha_100x100, &_love_alpha_100x100);


    lv_obj_align(ui->screen_menu_home_btn, LV_ALIGN_CENTER, 0, 0);

    /*Create a label on the image button*/
    lv_obj_t * label = lv_label_create(ui->screen_menu_home_btn);
    lv_label_set_text(label, "Button");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, -4);



    ui->screen_menu_weather_btn = lv_btn_create(ui->screen_menu);
    lv_obj_set_size(ui->screen_menu_weather_btn, 80, 80);
    lv_obj_t* label1 = lv_label_create(ui->screen_menu_weather_btn);
    lv_label_set_text_fmt(label1, "%s", "weather");
    lv_obj_center(label1);



// // 天气按钮
//   ui->screen_menu_weather_btn = lv_imgbtn_create(ui->screen_menu);
//   lv_obj_set_size(ui->screen_menu_weather_btn, 100, 100);

// 	lv_imgbtn_set_src(ui->screen_menu_weather_btn, LV_IMGBTN_STATE_RELEASED, NULL, &_weather_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_weather_btn, LV_IMGBTN_STATE_PRESSED, NULL, &_weather_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_weather_btn, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_weather_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_weather_btn, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_weather_alpha_100x100, NULL);
// 	lv_obj_add_flag(ui->screen_menu_weather_btn, LV_OBJ_FLAG_CHECKABLE);

// // 设置按钮
//   ui->screen_menu_setting_btn = lv_imgbtn_create(ui->screen_menu);
//   lv_obj_set_size(ui->screen_menu_setting_btn, 100, 100);
// 	lv_imgbtn_set_src(ui->screen_menu_setting_btn, LV_IMGBTN_STATE_RELEASED, NULL, &_setting_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_setting_btn, LV_IMGBTN_STATE_PRESSED, NULL, &_setting_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_setting_btn, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_setting_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_setting_btn, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_setting_alpha_100x100, NULL);
// 	lv_obj_add_flag(ui->screen_menu_setting_btn, LV_OBJ_FLAG_CHECKABLE);

// // bilibili按钮
//   ui->screen_menu_bilibili_btn = lv_imgbtn_create(ui->screen_menu);
//   lv_obj_set_size(ui->screen_menu_bilibili_btn, 100, 100);
// 	lv_imgbtn_set_src(ui->screen_menu_bilibili_btn, LV_IMGBTN_STATE_RELEASED, NULL, &_bilibili_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_bilibili_btn, LV_IMGBTN_STATE_PRESSED, NULL, &_bilibili_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_bilibili_btn, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_bilibili_alpha_100x100, NULL);
// 	lv_imgbtn_set_src(ui->screen_menu_bilibili_btn, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_bilibili_alpha_100x100, NULL);
// 	lv_obj_add_flag(ui->screen_menu_bilibili_btn, LV_OBJ_FLAG_CHECKABLE);

  uint32_t mid_btn_index = (lv_obj_get_child_cnt(ui->screen_main) - 1) / 2;
  for (uint32_t i = 0; i < mid_btn_index; i++) {
    lv_obj_move_to_index(lv_obj_get_child(ui->screen_main, -1), 0);
  }
  /*当按钮数为偶数时，确保按钮居中*/
  lv_obj_scroll_to_view(lv_obj_get_child(ui->screen_main, mid_btn_index),
                        LV_ANIM_OFF);

  events_init_screen_menu(ui);
  events_init_screen_menu_home_button(ui);
  events_init_screen_menu_weather_button(ui);
  // events_init_screen_menu_setting_button(ui);
  // events_init_screen_menu_bilibili_button(ui);
}
/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include <stdio.h>

#include "events_init.h"
#include "gui_guider.h"
#include "lvgl.h"

void button_event_cb(lv_event_t* event);

void setup_scr_screen_main(lv_ui* ui) {
  // Write codes screen_main
  ui->screen_main = lv_obj_create(NULL);

  lv_obj_set_size(ui->screen_main, LV_PCT(100), LV_PCT(100));
  lv_obj_set_scrollbar_mode(ui->screen_main, LV_SCROLLBAR_MODE_OFF);
  lv_obj_set_flex_flow(ui->screen_main, LV_FLEX_FLOW_ROW);
  lv_obj_set_flex_align(ui->screen_main, LV_FLEX_ALIGN_CENTER,
                        LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
  lv_obj_set_scroll_snap_x(ui->screen_main, LV_SCROLL_SNAP_CENTER);
  lv_obj_set_style_bg_opa(ui->screen_main, LV_OPA_0, LV_PART_MAIN);
  lv_obj_set_style_bg_color(ui->screen_main, lv_color_black(), LV_PART_MAIN);
  lv_obj_set_style_border_width(ui->screen_main, 0, LV_PART_MAIN);
  lv_obj_set_style_pad_column(ui->screen_main, 60,
                              LV_PART_MAIN);  //图标之间的间隙
  lv_obj_center(ui->screen_main);

  //生成演示按钮
  for (int i = 0; i < 10; i++) {
    lv_obj_t* btn = lv_btn_create(ui->screen_main);
    lv_obj_set_size(btn, 80, 80);
    lv_obj_add_event_cb(btn, button_event_cb, LV_EVENT_ALL, ui);

    lv_obj_t* label = lv_label_create(btn);
    lv_label_set_text_fmt(label, "%d", i);
    lv_obj_center(label);
  }

  uint32_t mid_btn_index = (lv_obj_get_child_cnt(ui->screen_main) - 1) / 2;
  for (uint32_t i = 0; i < mid_btn_index; i++) {
    lv_obj_move_to_index(lv_obj_get_child(ui->screen_main, -1), 0);
  }
  /*当按钮数为偶数时，确保按钮居中*/
  lv_obj_scroll_to_view(lv_obj_get_child(ui->screen_main, mid_btn_index),
                        LV_ANIM_OFF);

  // Init events for screen
  events_init_screen_main(ui);
}

/**
 * @brief 处理按钮事件的回调函数
 * @param event
 */
void button_event_cb(lv_event_t* event) {
  lv_ui* ui = (lv_ui*)lv_event_get_user_data(event);

  lv_obj_t* current_btn = lv_event_get_current_target(event);
  uint32_t current_btn_index = lv_obj_get_index(current_btn);
  uint32_t mid_btn_index = (lv_obj_get_child_cnt(ui->screen_main) - 1) / 2;

  if (event->code == LV_EVENT_FOCUSED) {
    if (current_btn_index > mid_btn_index) {
      lv_obj_scroll_to_view(
          lv_obj_get_child(ui->screen_main, mid_btn_index - 1), LV_ANIM_OFF);
      lv_obj_scroll_to_view(lv_obj_get_child(ui->screen_main, mid_btn_index),
                            LV_ANIM_ON);
      lv_obj_move_to_index(lv_obj_get_child(ui->screen_main, 0), -1);
    } else if (current_btn_index < mid_btn_index) {
      lv_obj_scroll_to_view(
          lv_obj_get_child(ui->screen_main, mid_btn_index + 1), LV_ANIM_OFF);
      lv_obj_scroll_to_view(lv_obj_get_child(ui->screen_main, mid_btn_index),
                            LV_ANIM_ON);
      lv_obj_move_to_index(lv_obj_get_child(ui->screen_main, -1), 0);
    }
  } else if (event->code == LV_EVENT_CLICKED) {
    /**/
  }
}
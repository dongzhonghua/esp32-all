/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"

#include <stdio.h>

#include "lvgl.h"

void events_init(lv_ui *ui) { LV_EVENT_RETURN = lv_event_register_id(); }

static void show_screen_menu_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);
  if (code == LV_EVENT_RETURN) {
    printf("show_screen_menu_event_handler: ");
    printf("%d\n", code);
    printf(" \n");
    lv_scr_load(ui->screen_menu);
  }
}

static void menu_btn_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);
  lv_obj_t *obj = lv_event_get_target(e);  //获取事件产生的对象

  lv_obj_t *current_btn = lv_event_get_current_target(e);
  uint32_t current_btn_index = lv_obj_get_index(current_btn);
  uint32_t mid_btn_index = (lv_obj_get_child_cnt(ui->screen_menu) - 1) / 2;

  bool is_screen_menu = (lv_scr_act() == ui->screen_menu);

  if (!is_screen_menu) {
    return;
  }

  if (code == LV_EVENT_FOCUSED) {
    if (current_btn_index > mid_btn_index) {
      lv_obj_scroll_to_view(
          lv_obj_get_child(ui->screen_menu, mid_btn_index - 1), LV_ANIM_OFF);
      lv_obj_scroll_to_view(lv_obj_get_child(ui->screen_menu, mid_btn_index),
                            LV_ANIM_ON);
      lv_obj_move_to_index(lv_obj_get_child(ui->screen_menu, 0), -1);
    } else if (current_btn_index < mid_btn_index) {
      lv_obj_scroll_to_view(
          lv_obj_get_child(ui->screen_menu, mid_btn_index + 1), LV_ANIM_OFF);
      lv_obj_scroll_to_view(lv_obj_get_child(ui->screen_menu, mid_btn_index),
                            LV_ANIM_ON);
      lv_obj_move_to_index(lv_obj_get_child(ui->screen_menu, -1), 0);
    }
  } else if (code == LV_EVENT_CLICKED) {
    if (obj == ui->screen_menu_home_btn) {
      printf("show_screen_main: ");
      printf("%d\n", code);
      printf(" \n");
      lv_scr_load(ui->screen_main);
    } else if (obj == ui->screen_menu_setting_btn) {
      printf("show_screen_settings: ");
      printf("%d\n", code);
      printf(" \n");
      lv_scr_load(ui->screen_settings);
    } else if (obj == ui->screen_menu_weather_btn) {
      printf("show_screen_weather: ");
      printf("%d\n", code);
      printf(" \n");
      lv_scr_load(ui->screen_weather);
    } else if (obj == ui->screen_menu_bilibili_btn) {
      printf("show_screen_bilibili: ");
      printf("%d\n", code);
      printf(" \n");
      lv_scr_load(ui->screen_settings);
    }
  }
}

// 屏幕事件
void events_init_screen_main(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_main, show_screen_menu_event_handler,
                      LV_EVENT_RETURN, ui);
}

void events_init_screen_settings(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_settings, show_screen_menu_event_handler,
                      LV_EVENT_RETURN, ui);
}

void events_init_screen_weather(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_weather, show_screen_menu_event_handler,
                      LV_EVENT_RETURN, ui);
}

void events_init_screen_menu(lv_ui *ui) {}

// 按钮事件

void events_init_screen_menu_setting_button(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_menu_setting_btn, menu_btn_event_handler,
                      LV_EVENT_ALL, ui);
}
void events_init_screen_menu_home_button(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_menu_home_btn, menu_btn_event_handler,
                      LV_EVENT_ALL, ui);
}
void events_init_screen_menu_weather_button(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_menu_weather_btn, menu_btn_event_handler,
                      LV_EVENT_ALL, ui);
}
void events_init_screen_menu_bilibili_button(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_menu_bilibili_btn, menu_btn_event_handler,
                      LV_EVENT_ALL, ui);
}
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

void events_init_screen_main(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_main, show_screen_menu_event_handler, LV_EVENT_RETURN,
                      ui);
}

void events_init_screen_settings(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_settings, show_screen_menu_event_handler,
                      LV_EVENT_RETURN, ui);
}

void events_init_screen_weather(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_weather, show_screen_menu_event_handler, LV_EVENT_RETURN,
                      ui);
}

void events_init_screen_menu(lv_ui *ui) {}

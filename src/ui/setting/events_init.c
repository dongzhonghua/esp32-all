/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"

#include <stdio.h>

#include "lvgl.h"

void events_init(lv_ui *ui) {}

static void setting_main_wifi_btn_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  switch (code) {
    case LV_EVENT_RELEASED: {
      printf("=======%d\n", code);

      if (!lv_obj_is_valid(guider_ui.setting_wifi)) {
        printf("=======%d\n", 111111);
        setup_scr_setting_wifi(&guider_ui);
      }
      lv_disp_t *d = lv_obj_get_disp(lv_scr_act());
      if (d->prev_scr == NULL && d->scr_to_load == NULL)
        lv_scr_load_anim(guider_ui.setting_wifi, LV_SCR_LOAD_ANIM_OVER_RIGHT,
                         1000, 1000, true);
      printf("=======%d\n", 111111);

    } break;
    default:
      break;
  }
}

static void setting_main_info_btn_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  switch (code) {
    case LV_EVENT_RELEASED: {
      if (!lv_obj_is_valid(guider_ui.setting_info))
        setup_scr_setting_info(&guider_ui);
      lv_disp_t *d = lv_obj_get_disp(lv_scr_act());
      if (d->prev_scr == NULL && d->scr_to_load == NULL)
        lv_scr_load_anim(guider_ui.setting_info, LV_SCR_LOAD_ANIM_OVER_TOP,
                         1000, 1000, true);
    } break;
    default:
      break;
  }
}

static void setting_main_file_btn_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  switch (code) {
    case LV_EVENT_RELEASED: {
      if (!lv_obj_is_valid(guider_ui.setting_file))
        setup_scr_setting_file(&guider_ui);
      lv_disp_t *d = lv_obj_get_disp(lv_scr_act());
      if (d->prev_scr == NULL && d->scr_to_load == NULL)
        lv_scr_load_anim(guider_ui.setting_file, LV_SCR_LOAD_ANIM_OVER_LEFT,
                         1000, 1000, true);
    } break;
    default:
      break;
  }
}

void events_init_setting_main(lv_ui *ui) {
  lv_obj_add_event_cb(ui->setting_main_wifi_btn,
                      setting_main_wifi_btn_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(ui->setting_main_info_btn,
                      setting_main_info_btn_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(ui->setting_main_file_btn,
                      setting_main_file_btn_event_handler, LV_EVENT_ALL, NULL);
}

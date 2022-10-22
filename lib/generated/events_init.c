/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"

#include <stdio.h>

#include "lvgl.h"
// #include "network.h"

static int counter = 0;
static char buf[4];

void events_init(lv_ui *ui) { LV_EVENT_RETURN = lv_event_register_id(); }

static void screen_main_screen_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);
  if (code == LV_EVENT_RETURN && lv_scr_act() == ui->screen_main) {
    printf("screen_main_screen_event_handler: ");
    printf("%d\n", code);
    printf(" \n");
    lv_scr_load(ui->screen_picture);
  }
}

void events_init_screen_main(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_main, screen_main_screen_event_handler,
                      LV_EVENT_RETURN, ui);
}

//  screen
static void screen_plus_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);

  switch (code) {
    case LV_EVENT_CLICKED: {
      counter++;

      // if (counter >= 3) {
      //   lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);
      //   lv_scr_load(ui->screen_picture);
      // }

      sprintf(buf, "%d", counter);
      lv_label_set_text(guider_ui.screen_counter, buf);

    } break;
    default:
      break;
  }
}

static void screen_minus_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  switch (code) {
    case LV_EVENT_CLICKED: {
      counter--;
      sprintf(buf, "%d", counter);
      lv_label_set_text(guider_ui.screen_counter, buf);
    } break;
    default:
      break;
  }
}

void events_init_screen(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_plus, screen_plus_event_handler, LV_EVENT_ALL,
                      ui);
  lv_obj_add_event_cb(ui->screen_minus, screen_minus_event_handler,
                      LV_EVENT_ALL, ui);
}

// screen picture handler

static void screen_picture_event_handler(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);
  if (code == LV_EVENT_RETURN && lv_scr_act() == ui->screen_picture) {
    printf("screen_picture_event_handler: ");
    printf("%d\n", code);
    printf(" \n");
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);
    lv_scr_load(ui->screen_main);
  }
}

void events_init_screen_picture(lv_ui *ui) {
  lv_obj_add_event_cb(ui->screen_picture, screen_picture_event_handler,
                      LV_EVENT_RETURN, ui);
}
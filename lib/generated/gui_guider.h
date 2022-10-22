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

#include "lvgl.h"
#include "guider_fonts/guider_fonts.h"

typedef struct
{
	lv_obj_t *screen_main;
	lv_obj_t *screen_main_main_tab;
	lv_obj_t *screen_main_main_tab_Time;
	lv_obj_t *screen_main_digital_clock_1;
	lv_obj_t *screen_main_temprature;
	lv_obj_t *screen_main_humidity;
	lv_obj_t *screen_main_label_4;
	lv_obj_t *screen_main_label_6;
	lv_obj_t *screen_main_weather_icon;
	lv_obj_t *screen_main_main_tab_switch;
	lv_obj_t *screen_main_bed_room_ligh_sw;
	lv_obj_t *screen_main_bed_room_light;
	lv_obj_t *screen_main_live_room_light;
	lv_obj_t *screen_main_live_room_ligh_sw;
	lv_obj_t *screen;
	lv_obj_t *screen_counter;
	lv_obj_t *screen_plus;
	lv_obj_t *screen_plus_label;
	lv_obj_t *screen_minus;
	lv_obj_t *screen_minus_label;
	lv_obj_t *screen_picture;
	lv_obj_t *animimg1;
	lv_obj_t *cb;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen_main(lv_ui *ui);
void clock_count_12(int *hour, int *min, int *sec, char *meridiem);
void clock_count_24(int *hour, int *min, int *sec);
void setup_scr_screen(lv_ui *ui);
void setup_scr_screen_picture(lv_ui *ui);
LV_IMG_DECLARE(_10_48x48);

#ifdef __cplusplus
}
#endif
#endif
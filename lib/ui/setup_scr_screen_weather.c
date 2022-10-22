/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen_weather(lv_ui *ui){

	//Write codes screen_weather
	ui->screen_weather = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_screen_weather_main_main_default
	static lv_style_t style_screen_weather_main_main_default;
	if (style_screen_weather_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_weather_main_main_default);
	else
		lv_style_init(&style_screen_weather_main_main_default);
	lv_style_set_bg_color(&style_screen_weather_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_screen_weather_main_main_default, 255);
	lv_obj_add_style(ui->screen_weather, &style_screen_weather_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_img_1
	ui->screen_weather_img_1 = lv_img_create(ui->screen_weather);
	lv_obj_set_pos(ui->screen_weather_img_1, 31, 13);
	lv_obj_set_size(ui->screen_weather_img_1, 100, 100);

	//Write style state: LV_STATE_DEFAULT for style_screen_weather_img_1_main_main_default
	static lv_style_t style_screen_weather_img_1_main_main_default;
	if (style_screen_weather_img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_weather_img_1_main_main_default);
	else
		lv_style_init(&style_screen_weather_img_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_weather_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_weather_img_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_weather_img_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_weather_img_1, &style_screen_weather_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_weather_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_weather_img_1,&_37_2x_100x100);
	lv_img_set_pivot(ui->screen_weather_img_1, 0,0);
	lv_img_set_angle(ui->screen_weather_img_1, 0);

	events_init_screen_weather(ui);
}
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


void setup_scr_screen_settings(lv_ui *ui){

	//Write codes screen_settings
	ui->screen_settings = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_screen_settings_main_main_default
	static lv_style_t style_screen_settings_main_main_default;
	if (style_screen_settings_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_settings_main_main_default);
	else
		lv_style_init(&style_screen_settings_main_main_default);
	lv_style_set_bg_color(&style_screen_settings_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_screen_settings_main_main_default, 255);
	lv_obj_add_style(ui->screen_settings, &style_screen_settings_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_settings_line_1
	ui->screen_settings_line_1 = lv_line_create(ui->screen_settings);
	lv_obj_set_pos(ui->screen_settings_line_1, 0, 80);
	lv_obj_set_size(ui->screen_settings_line_1, 160, 10);

	//Write style state: LV_STATE_DEFAULT for style_screen_settings_line_1_main_main_default
	static lv_style_t style_screen_settings_line_1_main_main_default;
	if (style_screen_settings_line_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_settings_line_1_main_main_default);
	else
		lv_style_init(&style_screen_settings_line_1_main_main_default);
	lv_style_set_line_color(&style_screen_settings_line_1_main_main_default, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_screen_settings_line_1_main_main_default, 3);
	lv_style_set_line_rounded(&style_screen_settings_line_1_main_main_default, true);
	lv_obj_add_style(ui->screen_settings_line_1, &style_screen_settings_line_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t screen_settings_line_1[] ={{30, 0},{130, 0},};
	lv_line_set_points(ui->screen_settings_line_1,screen_settings_line_1,2);

	events_init_screen_settings(ui);
}
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


void setup_scr_screen_menu(lv_ui *ui){

	//Write codes screen_menu
	ui->screen_menu = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_screen_menu_main_main_default
	static lv_style_t style_screen_menu_main_main_default;
	if (style_screen_menu_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_menu_main_main_default);
	else
		lv_style_init(&style_screen_menu_main_main_default);
	lv_style_set_bg_color(&style_screen_menu_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_screen_menu_main_main_default, 255);
	lv_obj_add_style(ui->screen_menu, &style_screen_menu_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);


	//Write codes screen_menu_setting
	ui->screen_menu_setting = lv_imgbtn_create(ui->screen_menu);
	lv_obj_set_pos(ui->screen_menu_setting, 32, 15);
	lv_obj_set_size(ui->screen_menu_setting, 100, 100);

	//Write style state: LV_STATE_DEFAULT for style_screen_menu_setting_main_main_default
	static lv_style_t style_screen_menu_setting_main_main_default;
	if (style_screen_menu_setting_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_menu_setting_main_main_default);
	else
		lv_style_init(&style_screen_menu_setting_main_main_default);
	lv_style_set_text_color(&style_screen_menu_setting_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor(&style_screen_menu_setting_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_menu_setting_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_menu_setting_main_main_default, 255);
	lv_obj_add_style(ui->screen_menu_setting, &style_screen_menu_setting_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_screen_menu_setting_main_main_pressed
	static lv_style_t style_screen_menu_setting_main_main_pressed;
	if (style_screen_menu_setting_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_screen_menu_setting_main_main_pressed);
	else
		lv_style_init(&style_screen_menu_setting_main_main_pressed);
	lv_style_set_text_color(&style_screen_menu_setting_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_screen_menu_setting_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_menu_setting_main_main_pressed, 0);
	lv_obj_add_style(ui->screen_menu_setting, &style_screen_menu_setting_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_screen_menu_setting_main_main_checked
	static lv_style_t style_screen_menu_setting_main_main_checked;
	if (style_screen_menu_setting_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_menu_setting_main_main_checked);
	else
		lv_style_init(&style_screen_menu_setting_main_main_checked);
	lv_style_set_text_color(&style_screen_menu_setting_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_img_recolor(&style_screen_menu_setting_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_screen_menu_setting_main_main_checked, 0);
	lv_obj_add_style(ui->screen_menu_setting, &style_screen_menu_setting_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_menu_setting, LV_IMGBTN_STATE_RELEASED, NULL, &_setting_alpha_100x100, NULL);
	lv_obj_add_flag(ui->screen_menu_setting, LV_OBJ_FLAG_CHECKABLE);

	events_init_screen_menu(ui);
}
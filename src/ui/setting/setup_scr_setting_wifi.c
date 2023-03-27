/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_setting_wifi(lv_ui *ui){

	//Write codes setting_wifi
	ui->setting_wifi = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_setting_wifi_main_main_default
	static lv_style_t style_setting_wifi_main_main_default;
	if (style_setting_wifi_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_wifi_main_main_default);
	else
		lv_style_init(&style_setting_wifi_main_main_default);
	lv_style_set_bg_color(&style_setting_wifi_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_setting_wifi_main_main_default, 255);
	lv_obj_add_style(ui->setting_wifi, &style_setting_wifi_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_wifi_label_1
	ui->setting_wifi_label_1 = lv_label_create(ui->setting_wifi);
	lv_obj_set_pos(ui->setting_wifi_label_1, 30, 111);
	lv_obj_set_size(ui->setting_wifi_label_1, 59, 18);
	lv_label_set_text(ui->setting_wifi_label_1, "IP:");
	lv_label_set_long_mode(ui->setting_wifi_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_wifi_label_1, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_wifi_label_1_main_main_default
	static lv_style_t style_setting_wifi_label_1_main_main_default;
	if (style_setting_wifi_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_wifi_label_1_main_main_default);
	else
		lv_style_init(&style_setting_wifi_label_1_main_main_default);
	lv_style_set_radius(&style_setting_wifi_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_wifi_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_wifi_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_wifi_label_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_wifi_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_setting_wifi_label_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_wifi_label_1_main_main_default, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_setting_wifi_label_1_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_wifi_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_wifi_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_wifi_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_wifi_label_1_main_main_default, 0);
	lv_obj_add_style(ui->setting_wifi_label_1, &style_setting_wifi_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_wifi_ip_label
	ui->setting_wifi_ip_label = lv_label_create(ui->setting_wifi);
	lv_obj_set_pos(ui->setting_wifi_ip_label, 97, 111);
	lv_obj_set_size(ui->setting_wifi_ip_label, 124, 19);
	lv_label_set_text(ui->setting_wifi_ip_label, "127.0.0.1");
	lv_label_set_long_mode(ui->setting_wifi_ip_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_wifi_ip_label, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_wifi_ip_label_main_main_default
	static lv_style_t style_setting_wifi_ip_label_main_main_default;
	if (style_setting_wifi_ip_label_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_wifi_ip_label_main_main_default);
	else
		lv_style_init(&style_setting_wifi_ip_label_main_main_default);
	lv_style_set_radius(&style_setting_wifi_ip_label_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_wifi_ip_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_wifi_ip_label_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_wifi_ip_label_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_wifi_ip_label_main_main_default, 0);
	lv_style_set_text_color(&style_setting_wifi_ip_label_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_wifi_ip_label_main_main_default, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_setting_wifi_ip_label_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_wifi_ip_label_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_wifi_ip_label_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_wifi_ip_label_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_wifi_ip_label_main_main_default, 0);
	lv_obj_add_style(ui->setting_wifi_ip_label, &style_setting_wifi_ip_label_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
}
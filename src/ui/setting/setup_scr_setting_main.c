/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_setting_main(lv_ui *ui){

	//Write codes setting_main
	ui->setting_main = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_setting_main_main_main_default
	static lv_style_t style_setting_main_main_main_default;
	if (style_setting_main_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_main_main_main_default);
	else
		lv_style_init(&style_setting_main_main_main_default);
	lv_style_set_bg_color(&style_setting_main_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_setting_main_main_main_default, 255);
	lv_obj_add_style(ui->setting_main, &style_setting_main_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_main_wifi_btn
	ui->setting_main_wifi_btn = lv_btn_create(ui->setting_main);
	lv_obj_set_pos(ui->setting_main_wifi_btn, 32, 89);
	lv_obj_set_size(ui->setting_main_wifi_btn, 50, 50);

	//Write style state: LV_STATE_DEFAULT for style_setting_main_wifi_btn_main_main_default
	static lv_style_t style_setting_main_wifi_btn_main_main_default;
	if (style_setting_main_wifi_btn_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_main_wifi_btn_main_main_default);
	else
		lv_style_init(&style_setting_main_wifi_btn_main_main_default);
	lv_style_set_radius(&style_setting_main_wifi_btn_main_main_default, 5);
	lv_style_set_bg_color(&style_setting_main_wifi_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_main_wifi_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_main_wifi_btn_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_main_wifi_btn_main_main_default, 255);
	lv_style_set_shadow_color(&style_setting_main_wifi_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_setting_main_wifi_btn_main_main_default, 255);
	lv_style_set_border_color(&style_setting_main_wifi_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_setting_main_wifi_btn_main_main_default, 0);
	lv_style_set_border_opa(&style_setting_main_wifi_btn_main_main_default, 255);
	lv_obj_add_style(ui->setting_main_wifi_btn, &style_setting_main_wifi_btn_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->setting_main_wifi_btn_label = lv_label_create(ui->setting_main_wifi_btn);
	lv_label_set_text(ui->setting_main_wifi_btn_label, "WIFI");
	lv_obj_set_style_text_color(ui->setting_main_wifi_btn_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->setting_main_wifi_btn_label, &lv_font_arial_12, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->setting_main_wifi_btn, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->setting_main_wifi_btn_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes setting_main_info_btn
	ui->setting_main_info_btn = lv_btn_create(ui->setting_main);
	lv_obj_set_pos(ui->setting_main_info_btn, 112, 89);
	lv_obj_set_size(ui->setting_main_info_btn, 50, 50);

	//Write style state: LV_STATE_DEFAULT for style_setting_main_info_btn_main_main_default
	static lv_style_t style_setting_main_info_btn_main_main_default;
	if (style_setting_main_info_btn_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_main_info_btn_main_main_default);
	else
		lv_style_init(&style_setting_main_info_btn_main_main_default);
	lv_style_set_radius(&style_setting_main_info_btn_main_main_default, 5);
	lv_style_set_bg_color(&style_setting_main_info_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_main_info_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_main_info_btn_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_main_info_btn_main_main_default, 255);
	lv_style_set_shadow_color(&style_setting_main_info_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_setting_main_info_btn_main_main_default, 255);
	lv_style_set_border_color(&style_setting_main_info_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_setting_main_info_btn_main_main_default, 0);
	lv_style_set_border_opa(&style_setting_main_info_btn_main_main_default, 255);
	lv_obj_add_style(ui->setting_main_info_btn, &style_setting_main_info_btn_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->setting_main_info_btn_label = lv_label_create(ui->setting_main_info_btn);
	lv_label_set_text(ui->setting_main_info_btn_label, "INFO");
	lv_obj_set_style_text_color(ui->setting_main_info_btn_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->setting_main_info_btn_label, &lv_font_arial_12, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->setting_main_info_btn, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->setting_main_info_btn_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes setting_main_file_btn
	ui->setting_main_file_btn = lv_btn_create(ui->setting_main);
	lv_obj_set_pos(ui->setting_main_file_btn, 191, 90);
	lv_obj_set_size(ui->setting_main_file_btn, 50, 50);

	//Write style state: LV_STATE_DEFAULT for style_setting_main_file_btn_main_main_default
	static lv_style_t style_setting_main_file_btn_main_main_default;
	if (style_setting_main_file_btn_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_main_file_btn_main_main_default);
	else
		lv_style_init(&style_setting_main_file_btn_main_main_default);
	lv_style_set_radius(&style_setting_main_file_btn_main_main_default, 5);
	lv_style_set_bg_color(&style_setting_main_file_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_main_file_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_main_file_btn_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_main_file_btn_main_main_default, 255);
	lv_style_set_shadow_color(&style_setting_main_file_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_setting_main_file_btn_main_main_default, 255);
	lv_style_set_border_color(&style_setting_main_file_btn_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_setting_main_file_btn_main_main_default, 0);
	lv_style_set_border_opa(&style_setting_main_file_btn_main_main_default, 255);
	lv_obj_add_style(ui->setting_main_file_btn, &style_setting_main_file_btn_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->setting_main_file_btn_label = lv_label_create(ui->setting_main_file_btn);
	lv_label_set_text(ui->setting_main_file_btn_label, "FILE");
	lv_obj_set_style_text_color(ui->setting_main_file_btn_label, lv_color_make(0x00, 0x00, 0x00), LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->setting_main_file_btn_label, &lv_font_arial_12, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->setting_main_file_btn, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->setting_main_file_btn_label, LV_ALIGN_CENTER, 0, 0);

	//Init events for screen
	events_init_setting_main(ui);
}
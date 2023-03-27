/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_setting_file(lv_ui *ui){

	//Write codes setting_file
	ui->setting_file = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_setting_file_main_main_default
	static lv_style_t style_setting_file_main_main_default;
	if (style_setting_file_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_file_main_main_default);
	else
		lv_style_init(&style_setting_file_main_main_default);
	lv_style_set_bg_color(&style_setting_file_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_setting_file_main_main_default, 255);
	lv_obj_add_style(ui->setting_file, &style_setting_file_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_file_label_1
	ui->setting_file_label_1 = lv_label_create(ui->setting_file);
	lv_obj_set_pos(ui->setting_file_label_1, 34, 57);
	lv_obj_set_size(ui->setting_file_label_1, 153, 23);
	lv_label_set_text(ui->setting_file_label_1, "sd card used:");
	lv_label_set_long_mode(ui->setting_file_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_file_label_1, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_file_label_1_main_main_default
	static lv_style_t style_setting_file_label_1_main_main_default;
	if (style_setting_file_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_file_label_1_main_main_default);
	else
		lv_style_init(&style_setting_file_label_1_main_main_default);
	lv_style_set_radius(&style_setting_file_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_file_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_file_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_file_label_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_file_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_setting_file_label_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_file_label_1_main_main_default, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_setting_file_label_1_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_file_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_file_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_file_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_file_label_1_main_main_default, 0);
	lv_obj_add_style(ui->setting_file_label_1, &style_setting_file_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_file_sd_card_bar
	ui->setting_file_sd_card_bar = lv_bar_create(ui->setting_file);
	lv_obj_set_pos(ui->setting_file_sd_card_bar, 38, 139);
	lv_obj_set_size(ui->setting_file_sd_card_bar, 134, 16);

	//Write style state: LV_STATE_DEFAULT for style_setting_file_sd_card_bar_main_main_default
	static lv_style_t style_setting_file_sd_card_bar_main_main_default;
	if (style_setting_file_sd_card_bar_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_file_sd_card_bar_main_main_default);
	else
		lv_style_init(&style_setting_file_sd_card_bar_main_main_default);
	lv_style_set_radius(&style_setting_file_sd_card_bar_main_main_default, 10);
	lv_style_set_bg_color(&style_setting_file_sd_card_bar_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_file_sd_card_bar_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_file_sd_card_bar_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_file_sd_card_bar_main_main_default, 81);
	lv_style_set_pad_left(&style_setting_file_sd_card_bar_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_file_sd_card_bar_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_file_sd_card_bar_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_file_sd_card_bar_main_main_default, 0);
	lv_obj_add_style(ui->setting_file_sd_card_bar, &style_setting_file_sd_card_bar_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_setting_file_sd_card_bar_main_indicator_default
	static lv_style_t style_setting_file_sd_card_bar_main_indicator_default;
	if (style_setting_file_sd_card_bar_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_setting_file_sd_card_bar_main_indicator_default);
	else
		lv_style_init(&style_setting_file_sd_card_bar_main_indicator_default);
	lv_style_set_radius(&style_setting_file_sd_card_bar_main_indicator_default, 10);
	lv_style_set_bg_color(&style_setting_file_sd_card_bar_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_file_sd_card_bar_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_file_sd_card_bar_main_indicator_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_file_sd_card_bar_main_indicator_default, 255);
	lv_obj_add_style(ui->setting_file_sd_card_bar, &style_setting_file_sd_card_bar_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_anim_time(ui->setting_file_sd_card_bar, 1000, 0);
	lv_bar_set_mode(ui->setting_file_sd_card_bar, LV_BAR_MODE_NORMAL);
	lv_bar_set_value(ui->setting_file_sd_card_bar, 50, LV_ANIM_OFF);

	//Write codes setting_file_sd_card_used_lable
	ui->setting_file_sd_card_used_lable = lv_label_create(ui->setting_file);
	lv_obj_set_pos(ui->setting_file_sd_card_used_lable, 180, 139);
	lv_obj_set_size(ui->setting_file_sd_card_used_lable, 100, 24);
	lv_label_set_text(ui->setting_file_sd_card_used_lable, "2G/32G");
	lv_label_set_long_mode(ui->setting_file_sd_card_used_lable, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_file_sd_card_used_lable, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_file_sd_card_used_lable_main_main_default
	static lv_style_t style_setting_file_sd_card_used_lable_main_main_default;
	if (style_setting_file_sd_card_used_lable_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_file_sd_card_used_lable_main_main_default);
	else
		lv_style_init(&style_setting_file_sd_card_used_lable_main_main_default);
	lv_style_set_radius(&style_setting_file_sd_card_used_lable_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_file_sd_card_used_lable_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_file_sd_card_used_lable_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_file_sd_card_used_lable_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_file_sd_card_used_lable_main_main_default, 0);
	lv_style_set_text_color(&style_setting_file_sd_card_used_lable_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_file_sd_card_used_lable_main_main_default, &lv_font_simsun_17);
	lv_style_set_text_letter_space(&style_setting_file_sd_card_used_lable_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_file_sd_card_used_lable_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_file_sd_card_used_lable_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_file_sd_card_used_lable_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_file_sd_card_used_lable_main_main_default, 0);
	lv_obj_add_style(ui->setting_file_sd_card_used_lable, &style_setting_file_sd_card_used_lable_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
}
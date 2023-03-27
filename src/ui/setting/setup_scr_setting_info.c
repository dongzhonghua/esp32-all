/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_setting_info(lv_ui *ui){

	//Write codes setting_info
	ui->setting_info = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_main_main_default
	static lv_style_t style_setting_info_main_main_default;
	if (style_setting_info_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_main_main_default);
	else
		lv_style_init(&style_setting_info_main_main_default);
	lv_style_set_bg_color(&style_setting_info_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_setting_info_main_main_default, 255);
	lv_obj_add_style(ui->setting_info, &style_setting_info_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_info_mem_arc
	ui->setting_info_mem_arc = lv_arc_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_mem_arc, 9, 72);
	lv_obj_set_size(ui->setting_info_mem_arc, 120, 120);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_mem_arc_main_main_default
	static lv_style_t style_setting_info_mem_arc_main_main_default;
	if (style_setting_info_mem_arc_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_mem_arc_main_main_default);
	else
		lv_style_init(&style_setting_info_mem_arc_main_main_default);
	lv_style_set_bg_color(&style_setting_info_mem_arc_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_setting_info_mem_arc_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_setting_info_mem_arc_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_mem_arc_main_main_default, 255);
	lv_style_set_border_width(&style_setting_info_mem_arc_main_main_default, 0);
	lv_style_set_arc_color(&style_setting_info_mem_arc_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_arc_width(&style_setting_info_mem_arc_main_main_default, 7);
	lv_obj_add_style(ui->setting_info_mem_arc, &style_setting_info_mem_arc_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_mem_arc_main_indicator_default
	static lv_style_t style_setting_info_mem_arc_main_indicator_default;
	if (style_setting_info_mem_arc_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_mem_arc_main_indicator_default);
	else
		lv_style_init(&style_setting_info_mem_arc_main_indicator_default);
	lv_style_set_arc_color(&style_setting_info_mem_arc_main_indicator_default, lv_color_make(0xdc, 0x6f, 0x09));
	lv_style_set_arc_width(&style_setting_info_mem_arc_main_indicator_default, 7);
	lv_obj_add_style(ui->setting_info_mem_arc, &style_setting_info_mem_arc_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_mem_arc_main_knob_default
	static lv_style_t style_setting_info_mem_arc_main_knob_default;
	if (style_setting_info_mem_arc_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_mem_arc_main_knob_default);
	else
		lv_style_init(&style_setting_info_mem_arc_main_knob_default);
	lv_style_set_bg_color(&style_setting_info_mem_arc_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_info_mem_arc_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_info_mem_arc_main_knob_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_mem_arc_main_knob_default, 0);
	lv_style_set_pad_all(&style_setting_info_mem_arc_main_knob_default, 0);
	lv_obj_add_style(ui->setting_info_mem_arc, &style_setting_info_mem_arc_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_arc_set_bg_angles(ui->setting_info_mem_arc, 0, 360);
	lv_arc_set_angles(ui->setting_info_mem_arc, 270, 0);
	lv_arc_set_rotation(ui->setting_info_mem_arc, 0);
	lv_obj_set_style_pad_top(ui->setting_info_mem_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->setting_info_mem_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->setting_info_mem_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->setting_info_mem_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->setting_info_mem_arc, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->setting_info_mem_arc, 0, LV_STATE_DEFAULT);

	//Write codes setting_info_cpu_arc
	ui->setting_info_cpu_arc = lv_arc_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_cpu_arc, 150, 70);
	lv_obj_set_size(ui->setting_info_cpu_arc, 120, 120);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_cpu_arc_main_main_default
	static lv_style_t style_setting_info_cpu_arc_main_main_default;
	if (style_setting_info_cpu_arc_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_cpu_arc_main_main_default);
	else
		lv_style_init(&style_setting_info_cpu_arc_main_main_default);
	lv_style_set_bg_color(&style_setting_info_cpu_arc_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_setting_info_cpu_arc_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_setting_info_cpu_arc_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_cpu_arc_main_main_default, 255);
	lv_style_set_border_width(&style_setting_info_cpu_arc_main_main_default, 0);
	lv_style_set_arc_color(&style_setting_info_cpu_arc_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_arc_width(&style_setting_info_cpu_arc_main_main_default, 7);
	lv_obj_add_style(ui->setting_info_cpu_arc, &style_setting_info_cpu_arc_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_cpu_arc_main_indicator_default
	static lv_style_t style_setting_info_cpu_arc_main_indicator_default;
	if (style_setting_info_cpu_arc_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_cpu_arc_main_indicator_default);
	else
		lv_style_init(&style_setting_info_cpu_arc_main_indicator_default);
	lv_style_set_arc_color(&style_setting_info_cpu_arc_main_indicator_default, lv_color_make(0x0c, 0xb0, 0x69));
	lv_style_set_arc_width(&style_setting_info_cpu_arc_main_indicator_default, 7);
	lv_obj_add_style(ui->setting_info_cpu_arc, &style_setting_info_cpu_arc_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_cpu_arc_main_knob_default
	static lv_style_t style_setting_info_cpu_arc_main_knob_default;
	if (style_setting_info_cpu_arc_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_cpu_arc_main_knob_default);
	else
		lv_style_init(&style_setting_info_cpu_arc_main_knob_default);
	lv_style_set_bg_color(&style_setting_info_cpu_arc_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_info_cpu_arc_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_info_cpu_arc_main_knob_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_cpu_arc_main_knob_default, 0);
	lv_style_set_pad_all(&style_setting_info_cpu_arc_main_knob_default, 0);
	lv_obj_add_style(ui->setting_info_cpu_arc, &style_setting_info_cpu_arc_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_arc_set_bg_angles(ui->setting_info_cpu_arc, 0, 360);
	lv_arc_set_angles(ui->setting_info_cpu_arc, 270, 0);
	lv_arc_set_rotation(ui->setting_info_cpu_arc, 0);
	lv_obj_set_style_pad_top(ui->setting_info_cpu_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->setting_info_cpu_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->setting_info_cpu_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->setting_info_cpu_arc, 0, LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->setting_info_cpu_arc, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->setting_info_cpu_arc, 0, LV_STATE_DEFAULT);

	//Write codes setting_info_line_2
	ui->setting_info_line_2 = lv_line_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_line_2, 28, 127);
	lv_obj_set_size(ui->setting_info_line_2, 86, 10);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_line_2_main_main_default
	static lv_style_t style_setting_info_line_2_main_main_default;
	if (style_setting_info_line_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_line_2_main_main_default);
	else
		lv_style_init(&style_setting_info_line_2_main_main_default);
	lv_style_set_line_color(&style_setting_info_line_2_main_main_default, lv_color_make(0xa3, 0xa3, 0xa3));
	lv_style_set_line_width(&style_setting_info_line_2_main_main_default, 3);
	lv_style_set_line_rounded(&style_setting_info_line_2_main_main_default, true);
	lv_obj_add_style(ui->setting_info_line_2, &style_setting_info_line_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t setting_info_line_2[] ={{0, 0},{80, 0},};
	lv_line_set_points(ui->setting_info_line_2,setting_info_line_2,2);

	//Write codes setting_info_label_1
	ui->setting_info_label_1 = lv_label_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_label_1, 45, 98);
	lv_obj_set_size(ui->setting_info_label_1, 54, 18);
	lv_label_set_text(ui->setting_info_label_1, "MEM");
	lv_label_set_long_mode(ui->setting_info_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_info_label_1, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_label_1_main_main_default
	static lv_style_t style_setting_info_label_1_main_main_default;
	if (style_setting_info_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_label_1_main_main_default);
	else
		lv_style_init(&style_setting_info_label_1_main_main_default);
	lv_style_set_radius(&style_setting_info_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_info_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_info_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_info_label_1_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_setting_info_label_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_info_label_1_main_main_default, &lv_font_arial_18);
	lv_style_set_text_letter_space(&style_setting_info_label_1_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_info_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_info_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_info_label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_info_label_1_main_main_default, 0);
	lv_obj_add_style(ui->setting_info_label_1, &style_setting_info_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_info_mem_percent_lable
	ui->setting_info_mem_percent_lable = lv_label_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_mem_percent_lable, 55, 148);
	lv_obj_set_size(ui->setting_info_mem_percent_lable, 37, 16);
	lv_label_set_text(ui->setting_info_mem_percent_lable, "20%");
	lv_label_set_long_mode(ui->setting_info_mem_percent_lable, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_info_mem_percent_lable, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_mem_percent_lable_main_main_default
	static lv_style_t style_setting_info_mem_percent_lable_main_main_default;
	if (style_setting_info_mem_percent_lable_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_mem_percent_lable_main_main_default);
	else
		lv_style_init(&style_setting_info_mem_percent_lable_main_main_default);
	lv_style_set_radius(&style_setting_info_mem_percent_lable_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_info_mem_percent_lable_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_info_mem_percent_lable_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_info_mem_percent_lable_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_mem_percent_lable_main_main_default, 0);
	lv_style_set_text_color(&style_setting_info_mem_percent_lable_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_info_mem_percent_lable_main_main_default, &lv_font_arial_14);
	lv_style_set_text_letter_space(&style_setting_info_mem_percent_lable_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_info_mem_percent_lable_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_info_mem_percent_lable_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_info_mem_percent_lable_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_info_mem_percent_lable_main_main_default, 0);
	lv_obj_add_style(ui->setting_info_mem_percent_lable, &style_setting_info_mem_percent_lable_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_info_cpu_percent_lable
	ui->setting_info_cpu_percent_lable = lv_label_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_cpu_percent_lable, 197, 148);
	lv_obj_set_size(ui->setting_info_cpu_percent_lable, 37, 16);
	lv_label_set_text(ui->setting_info_cpu_percent_lable, "20%");
	lv_label_set_long_mode(ui->setting_info_cpu_percent_lable, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_info_cpu_percent_lable, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_cpu_percent_lable_main_main_default
	static lv_style_t style_setting_info_cpu_percent_lable_main_main_default;
	if (style_setting_info_cpu_percent_lable_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_cpu_percent_lable_main_main_default);
	else
		lv_style_init(&style_setting_info_cpu_percent_lable_main_main_default);
	lv_style_set_radius(&style_setting_info_cpu_percent_lable_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_info_cpu_percent_lable_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_info_cpu_percent_lable_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_info_cpu_percent_lable_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_cpu_percent_lable_main_main_default, 0);
	lv_style_set_text_color(&style_setting_info_cpu_percent_lable_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_info_cpu_percent_lable_main_main_default, &lv_font_arial_14);
	lv_style_set_text_letter_space(&style_setting_info_cpu_percent_lable_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_info_cpu_percent_lable_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_info_cpu_percent_lable_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_info_cpu_percent_lable_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_info_cpu_percent_lable_main_main_default, 0);
	lv_obj_add_style(ui->setting_info_cpu_percent_lable, &style_setting_info_cpu_percent_lable_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_info_label_5
	ui->setting_info_label_5 = lv_label_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_label_5, 189, 100);
	lv_obj_set_size(ui->setting_info_label_5, 52, 15);
	lv_label_set_text(ui->setting_info_label_5, "CPU");
	lv_label_set_long_mode(ui->setting_info_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_info_label_5, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_label_5_main_main_default
	static lv_style_t style_setting_info_label_5_main_main_default;
	if (style_setting_info_label_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_label_5_main_main_default);
	else
		lv_style_init(&style_setting_info_label_5_main_main_default);
	lv_style_set_radius(&style_setting_info_label_5_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_info_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_info_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_info_label_5_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_label_5_main_main_default, 0);
	lv_style_set_text_color(&style_setting_info_label_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_info_label_5_main_main_default, &lv_font_arial_18);
	lv_style_set_text_letter_space(&style_setting_info_label_5_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_info_label_5_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_info_label_5_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_info_label_5_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_info_label_5_main_main_default, 0);
	lv_obj_add_style(ui->setting_info_label_5, &style_setting_info_label_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes setting_info_line_3
	ui->setting_info_line_3 = lv_line_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_line_3, 168, 127);
	lv_obj_set_size(ui->setting_info_line_3, 86, 10);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_line_3_main_main_default
	static lv_style_t style_setting_info_line_3_main_main_default;
	if (style_setting_info_line_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_line_3_main_main_default);
	else
		lv_style_init(&style_setting_info_line_3_main_main_default);
	lv_style_set_line_color(&style_setting_info_line_3_main_main_default, lv_color_make(0xa3, 0xa3, 0xa3));
	lv_style_set_line_width(&style_setting_info_line_3_main_main_default, 3);
	lv_style_set_line_rounded(&style_setting_info_line_3_main_main_default, true);
	lv_obj_add_style(ui->setting_info_line_3, &style_setting_info_line_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static lv_point_t setting_info_line_3[] ={{0, 0},{80, 0},};
	lv_line_set_points(ui->setting_info_line_3,setting_info_line_3,2);

	//Write codes setting_info_label_6
	ui->setting_info_label_6 = lv_label_create(ui->setting_info);
	lv_obj_set_pos(ui->setting_info_label_6, 64, 20);
	lv_obj_set_size(ui->setting_info_label_6, 156, 20);
	lv_label_set_text(ui->setting_info_label_6, "CHIP INFO");
	lv_label_set_long_mode(ui->setting_info_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->setting_info_label_6, LV_TEXT_ALIGN_CENTER, 0);

	//Write style state: LV_STATE_DEFAULT for style_setting_info_label_6_main_main_default
	static lv_style_t style_setting_info_label_6_main_main_default;
	if (style_setting_info_label_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_setting_info_label_6_main_main_default);
	else
		lv_style_init(&style_setting_info_label_6_main_main_default);
	lv_style_set_radius(&style_setting_info_label_6_main_main_default, 0);
	lv_style_set_bg_color(&style_setting_info_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_setting_info_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_setting_info_label_6_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setting_info_label_6_main_main_default, 0);
	lv_style_set_text_color(&style_setting_info_label_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setting_info_label_6_main_main_default, &lv_font_simsun_21);
	lv_style_set_text_letter_space(&style_setting_info_label_6_main_main_default, 2);
	lv_style_set_pad_left(&style_setting_info_label_6_main_main_default, 0);
	lv_style_set_pad_right(&style_setting_info_label_6_main_main_default, 0);
	lv_style_set_pad_top(&style_setting_info_label_6_main_main_default, 0);
	lv_style_set_pad_bottom(&style_setting_info_label_6_main_main_default, 0);
	lv_obj_add_style(ui->setting_info_label_6, &style_setting_info_label_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
}
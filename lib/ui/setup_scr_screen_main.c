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

static const lv_img_dsc_t* screen_main_animimg_1_imgs[14] = {
	&screen_main_animimg_1a1,
	&screen_main_animimg_1a2,
	&screen_main_animimg_1a3,
	&screen_main_animimg_1a4,
	&screen_main_animimg_1a5,
	&screen_main_animimg_1a6,
	&screen_main_animimg_1a7,
	&screen_main_animimg_1a8,
	&screen_main_animimg_1a9,
	&screen_main_animimg_1a10,
	&screen_main_animimg_1a11,
	&screen_main_animimg_1a12,
	&screen_main_animimg_1a13,
	&screen_main_animimg_1a14
};

void setup_scr_screen_main(lv_ui *ui){

	//Write codes screen_main
	ui->screen_main = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_main_main_default
	static lv_style_t style_screen_main_main_main_default;
	if (style_screen_main_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_main_main_default);
	else
		lv_style_init(&style_screen_main_main_main_default);
	lv_style_set_bg_color(&style_screen_main_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_opa(&style_screen_main_main_main_default, 255);
	lv_obj_add_style(ui->screen_main, &style_screen_main_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_main_animimg_1
	ui->screen_main_animimg_1 = lv_animimg_create(ui->screen_main);
	lv_obj_set_pos(ui->screen_main_animimg_1, 80, 48);
	lv_obj_set_size(ui->screen_main_animimg_1, 80, 80);
	lv_animimg_set_src(ui->screen_main_animimg_1, (lv_img_dsc_t**) screen_main_animimg_1_imgs, 14);
	lv_animimg_set_duration(ui->screen_main_animimg_1, 840);
	lv_animimg_set_repeat_count(ui->screen_main_animimg_1, 3000);
	lv_animimg_start(ui->screen_main_animimg_1);

	//Write codes screen_main_img_1
	ui->screen_main_img_1 = lv_img_create(ui->screen_main);
	lv_obj_set_pos(ui->screen_main_img_1, 14, 58);
	lv_obj_set_size(ui->screen_main_img_1, 60, 60);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_img_1_main_main_default
	static lv_style_t style_screen_main_img_1_main_main_default;
	if (style_screen_main_img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_img_1_main_main_default);
	else
		lv_style_init(&style_screen_main_img_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_main_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_main_img_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_main_img_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_main_img_1, &style_screen_main_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_main_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_main_img_1,&_7_2x_60x60);
	lv_img_set_pivot(ui->screen_main_img_1, 0,0);
	lv_img_set_angle(ui->screen_main_img_1, 0);

	//Write codes screen_main_label_1
	ui->screen_main_label_1 = lv_label_create(ui->screen_main);
	lv_obj_set_pos(ui->screen_main_label_1, 5, 0);
	lv_obj_set_size(ui->screen_main_label_1, 90, 30);
	lv_label_set_text(ui->screen_main_label_1, "20:20");
	lv_label_set_long_mode(ui->screen_main_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->screen_main_label_1, LV_TEXT_ALIGN_LEFT, 0);

	//Write codes screen_main_label_2
	ui->screen_main_label_2 = lv_label_create(ui->screen_main);
	lv_obj_set_pos(ui->screen_main_label_2, 5, 35);
	lv_obj_set_size(ui->screen_main_label_2, 75, 18);
	lv_label_set_text(ui->screen_main_label_2, "10-21");
	lv_label_set_long_mode(ui->screen_main_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_style_text_align(ui->screen_main_label_2, LV_TEXT_ALIGN_LEFT, 0);

	//Write codes screen_main_img_2
	ui->screen_main_img_2 = lv_img_create(ui->screen_main);
	lv_obj_set_pos(ui->screen_main_img_2, 101, 7);
	lv_obj_set_size(ui->screen_main_img_2, 16, 16);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_img_2_main_main_default
	static lv_style_t style_screen_main_img_2_main_main_default;
	if (style_screen_main_img_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_img_2_main_main_default);
	else
		lv_style_init(&style_screen_main_img_2_main_main_default);
	lv_style_set_img_recolor(&style_screen_main_img_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_main_img_2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_main_img_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_main_img_2, &style_screen_main_img_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_main_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_main_img_2,&_temprature_16x16);
	lv_img_set_pivot(ui->screen_main_img_2, 0,0);
	lv_img_set_angle(ui->screen_main_img_2, 0);

	//Write codes screen_main_img_3
	ui->screen_main_img_3 = lv_img_create(ui->screen_main);
	lv_obj_set_pos(ui->screen_main_img_3, 102, 29);
	lv_obj_set_size(ui->screen_main_img_3, 16, 16);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_img_3_main_main_default
	static lv_style_t style_screen_main_img_3_main_main_default;
	if (style_screen_main_img_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_img_3_main_main_default);
	else
		lv_style_init(&style_screen_main_img_3_main_main_default);
	lv_style_set_img_recolor(&style_screen_main_img_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_main_img_3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_main_img_3_main_main_default, 255);
	lv_obj_add_style(ui->screen_main_img_3, &style_screen_main_img_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_main_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_main_img_3,&_humidity_16x16);
	lv_img_set_pivot(ui->screen_main_img_3, 0,0);
	lv_img_set_angle(ui->screen_main_img_3, 0);

	events_init_screen_main(ui);
}
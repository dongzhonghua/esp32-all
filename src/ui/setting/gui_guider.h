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
#include "resource/font/guider_fonts.h"

typedef struct
{
	lv_obj_t *setting_main;
	lv_obj_t *setting_main_wifi_btn;
	lv_obj_t *setting_main_wifi_btn_label;
	lv_obj_t *setting_main_info_btn;
	lv_obj_t *setting_main_info_btn_label;
	lv_obj_t *setting_main_file_btn;
	lv_obj_t *setting_main_file_btn_label;

	lv_obj_t *setting_info;
	lv_obj_t *setting_info_mem_arc;
	lv_obj_t *setting_info_cpu_arc;
	lv_obj_t *setting_info_line_2;
	lv_obj_t *setting_info_label_1;
	lv_obj_t *setting_info_mem_percent_lable;
	lv_obj_t *setting_info_cpu_percent_lable;
	lv_obj_t *setting_info_label_5;
	lv_obj_t *setting_info_line_3;
	lv_obj_t *setting_info_label_6;
	
	lv_obj_t *setting_wifi;
	lv_obj_t *setting_wifi_label_1;
	lv_obj_t *setting_wifi_ip_label;
	lv_obj_t *setting_file;
	lv_obj_t *setting_file_label_1;
	lv_obj_t *setting_file_sd_card_bar;
	lv_obj_t *setting_file_sd_card_used_lable;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_setting_main(lv_ui *ui);
void setup_scr_setting_info(lv_ui *ui);
void setup_scr_setting_wifi(lv_ui *ui);
void setup_scr_setting_file(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif
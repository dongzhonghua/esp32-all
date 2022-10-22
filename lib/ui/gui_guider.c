/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"


void setup_ui(lv_ui *ui){
	setup_scr_screen_main(ui);
	setup_scr_screen_menu(ui);
	setup_scr_screen_settings(ui);
	setup_scr_screen_weather(ui);
	
	lv_scr_load(ui->screen_main);
}

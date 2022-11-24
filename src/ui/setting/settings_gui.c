#include "settings_gui.h"

#include "stdio.h"
#include "lvgl.h"

lv_obj_t *settings;
lv_obj_t *settings_wifi_btn;
lv_obj_t *settings_wifi_btn_label;
lv_obj_t *settings_info_btn;
lv_obj_t *settings_info_btn_label;
lv_obj_t *settings_file_btn;
lv_obj_t *settings_file_btn_label;
lv_obj_t *settings_mem_arc;
lv_obj_t *settings_cpu_arc;
lv_obj_t *settings_line_2;
lv_obj_t *settings_label_1;
lv_obj_t *settings_mem_percent_lable;
lv_obj_t *settings_cpu_percent_lable;
lv_obj_t *settings_label_5;


void settings_gui_init(void) {
  settings = lv_obj_create(NULL);  
  
  // Write style state: LV_STATE_DEFAULT for style_settings_main_main_default
  static lv_style_t style_settings_main_main_default;
  if (style_settings_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_main_main_default);
  else
    lv_style_init(&style_settings_main_main_default);
  lv_style_set_bg_color(&style_settings_main_main_default,
                        lv_color_make(0x00, 0x00, 0x00));
  lv_style_set_bg_opa(&style_settings_main_main_default, 255);
  lv_obj_add_style(settings, &style_settings_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes settings_wifi_btn
  settings_wifi_btn = lv_btn_create(settings);
  lv_obj_set_pos(settings_wifi_btn, 40, 160);
  lv_obj_set_size(settings_wifi_btn, 50, 50);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_wifi_btn_main_main_default
  static lv_style_t style_settings_wifi_btn_main_main_default;
  if (style_settings_wifi_btn_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_wifi_btn_main_main_default);
  else
    lv_style_init(&style_settings_wifi_btn_main_main_default);
  lv_style_set_radius(&style_settings_wifi_btn_main_main_default, 5);
  lv_style_set_bg_color(&style_settings_wifi_btn_main_main_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_settings_wifi_btn_main_main_default,
                             lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_wifi_btn_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_wifi_btn_main_main_default, 255);
  lv_style_set_shadow_color(&style_settings_wifi_btn_main_main_default,
                            lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_settings_wifi_btn_main_main_default, 255);
  lv_style_set_border_color(&style_settings_wifi_btn_main_main_default,
                            lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_border_width(&style_settings_wifi_btn_main_main_default, 0);
  lv_style_set_border_opa(&style_settings_wifi_btn_main_main_default, 255);
  lv_obj_add_style(settings_wifi_btn,
                   &style_settings_wifi_btn_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  settings_wifi_btn_label = lv_label_create(settings_wifi_btn);
  lv_label_set_text(settings_wifi_btn_label, "WIFI");
  lv_obj_set_style_text_color(settings_wifi_btn_label,
                              lv_color_make(0x00, 0x00, 0x00),
                              LV_STATE_DEFAULT);
//   lv_obj_set_style_text_font(settings_wifi_btn_label, &lv_font_arial_12,
//                              LV_STATE_DEFAULT);
  lv_obj_set_style_pad_all(settings_wifi_btn, 0, LV_STATE_DEFAULT);
  lv_obj_align(settings_wifi_btn_label, LV_ALIGN_CENTER, 0, 0);

  // Write codes settings_info_btn
  settings_info_btn = lv_btn_create(settings);
  lv_obj_set_pos(settings_info_btn, 115, 160);
  lv_obj_set_size(settings_info_btn, 50, 50);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_info_btn_main_main_default
  static lv_style_t style_settings_info_btn_main_main_default;
  if (style_settings_info_btn_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_info_btn_main_main_default);
  else
    lv_style_init(&style_settings_info_btn_main_main_default);
  lv_style_set_radius(&style_settings_info_btn_main_main_default, 5);
  lv_style_set_bg_color(&style_settings_info_btn_main_main_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_settings_info_btn_main_main_default,
                             lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_info_btn_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_info_btn_main_main_default, 255);
  lv_style_set_shadow_color(&style_settings_info_btn_main_main_default,
                            lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_settings_info_btn_main_main_default, 255);
  lv_style_set_border_color(&style_settings_info_btn_main_main_default,
                            lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_border_width(&style_settings_info_btn_main_main_default, 0);
  lv_style_set_border_opa(&style_settings_info_btn_main_main_default, 255);
  lv_obj_add_style(settings_info_btn,
                   &style_settings_info_btn_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  settings_info_btn_label = lv_label_create(settings_info_btn);
  lv_label_set_text(settings_info_btn_label, "INFO");
  lv_obj_set_style_text_color(settings_info_btn_label,
                              lv_color_make(0x00, 0x00, 0x00),
                              LV_STATE_DEFAULT);
//   lv_obj_set_style_text_font(settings_info_btn_label, &lv_font_arial_12,
//                              LV_STATE_DEFAULT);
  lv_obj_set_style_pad_all(settings_info_btn, 0, LV_STATE_DEFAULT);
  lv_obj_align(settings_info_btn_label, LV_ALIGN_CENTER, 0, 0);

  // Write codes settings_file_btn
  settings_file_btn = lv_btn_create(settings);
  lv_obj_set_pos(settings_file_btn, 190, 160);
  lv_obj_set_size(settings_file_btn, 50, 50);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_file_btn_main_main_default
  static lv_style_t style_settings_file_btn_main_main_default;
  if (style_settings_file_btn_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_file_btn_main_main_default);
  else
    lv_style_init(&style_settings_file_btn_main_main_default);
  lv_style_set_radius(&style_settings_file_btn_main_main_default, 5);
  lv_style_set_bg_color(&style_settings_file_btn_main_main_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_settings_file_btn_main_main_default,
                             lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_file_btn_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_file_btn_main_main_default, 255);
  lv_style_set_shadow_color(&style_settings_file_btn_main_main_default,
                            lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_settings_file_btn_main_main_default, 255);
  lv_style_set_border_color(&style_settings_file_btn_main_main_default,
                            lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_border_width(&style_settings_file_btn_main_main_default, 0);
  lv_style_set_border_opa(&style_settings_file_btn_main_main_default, 255);
  lv_obj_add_style(settings_file_btn,
                   &style_settings_file_btn_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  settings_file_btn_label = lv_label_create(settings_file_btn);
  lv_label_set_text(settings_file_btn_label, "FILE");
  lv_obj_set_style_text_color(settings_file_btn_label,
                              lv_color_make(0x00, 0x00, 0x00),
                              LV_STATE_DEFAULT);
//   lv_obj_set_style_text_font(settings_file_btn_label, &lv_font_arial_12,
//                              LV_STATE_DEFAULT);
  lv_obj_set_style_pad_all(settings_file_btn, 0, LV_STATE_DEFAULT);
  lv_obj_align(settings_file_btn_label, LV_ALIGN_CENTER, 0, 0);

  // Write codes settings_mem_arc
  settings_mem_arc = lv_arc_create(settings);
  lv_obj_set_pos(settings_mem_arc, 25, 33);
  lv_obj_set_size(settings_mem_arc, 80, 88);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_mem_arc_main_main_default
  static lv_style_t style_settings_mem_arc_main_main_default;
  if (style_settings_mem_arc_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_mem_arc_main_main_default);
  else
    lv_style_init(&style_settings_mem_arc_main_main_default);
  lv_style_set_bg_color(&style_settings_mem_arc_main_main_default,
                        lv_color_make(0x00, 0x00, 0x00));
  lv_style_set_bg_grad_color(&style_settings_mem_arc_main_main_default,
                             lv_color_make(0x00, 0x00, 0x00));
  lv_style_set_bg_grad_dir(&style_settings_mem_arc_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_mem_arc_main_main_default, 255);
  lv_style_set_border_width(&style_settings_mem_arc_main_main_default, 0);
  lv_style_set_arc_color(&style_settings_mem_arc_main_main_default,
                         lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_arc_width(&style_settings_mem_arc_main_main_default, 7);
  lv_obj_add_style(settings_mem_arc,
                   &style_settings_mem_arc_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_mem_arc_main_indicator_default
  static lv_style_t style_settings_mem_arc_main_indicator_default;
  if (style_settings_mem_arc_main_indicator_default.prop_cnt > 1)
    lv_style_reset(&style_settings_mem_arc_main_indicator_default);
  else
    lv_style_init(&style_settings_mem_arc_main_indicator_default);
  lv_style_set_arc_color(&style_settings_mem_arc_main_indicator_default,
                         lv_color_make(0xdc, 0x6f, 0x09));
  lv_style_set_arc_width(&style_settings_mem_arc_main_indicator_default, 7);
  lv_obj_add_style(settings_mem_arc,
                   &style_settings_mem_arc_main_indicator_default,
                   LV_PART_INDICATOR | LV_STATE_DEFAULT);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_mem_arc_main_knob_default
  static lv_style_t style_settings_mem_arc_main_knob_default;
  if (style_settings_mem_arc_main_knob_default.prop_cnt > 1)
    lv_style_reset(&style_settings_mem_arc_main_knob_default);
  else
    lv_style_init(&style_settings_mem_arc_main_knob_default);
  lv_style_set_bg_color(&style_settings_mem_arc_main_knob_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_settings_mem_arc_main_knob_default,
                             lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_mem_arc_main_knob_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_mem_arc_main_knob_default, 0);
  lv_style_set_pad_all(&style_settings_mem_arc_main_knob_default, 0);
  lv_obj_add_style(settings_mem_arc,
                   &style_settings_mem_arc_main_knob_default,
                   LV_PART_KNOB | LV_STATE_DEFAULT);
  lv_arc_set_bg_angles(settings_mem_arc, 0, 360);
  lv_arc_set_angles(settings_mem_arc, 270, 0);
  lv_arc_set_rotation(settings_mem_arc, 0);
  lv_obj_set_style_pad_top(settings_mem_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(settings_mem_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(settings_mem_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(settings_mem_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_arc_rounded(settings_mem_arc, 0,
                               LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_arc_rounded(settings_mem_arc, 0, LV_STATE_DEFAULT);

  // Write codes settings_cpu_arc
  settings_cpu_arc = lv_arc_create(settings);
  lv_obj_set_pos(settings_cpu_arc, 176, 32);
  lv_obj_set_size(settings_cpu_arc, 80, 88);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_cpu_arc_main_main_default
  static lv_style_t style_settings_cpu_arc_main_main_default;
  if (style_settings_cpu_arc_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_cpu_arc_main_main_default);
  else
    lv_style_init(&style_settings_cpu_arc_main_main_default);
  lv_style_set_bg_color(&style_settings_cpu_arc_main_main_default,
                        lv_color_make(0x00, 0x00, 0x00));
  lv_style_set_bg_grad_color(&style_settings_cpu_arc_main_main_default,
                             lv_color_make(0x00, 0x00, 0x00));
  lv_style_set_bg_grad_dir(&style_settings_cpu_arc_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_cpu_arc_main_main_default, 255);
  lv_style_set_border_width(&style_settings_cpu_arc_main_main_default, 0);
  lv_style_set_arc_color(&style_settings_cpu_arc_main_main_default,
                         lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_arc_width(&style_settings_cpu_arc_main_main_default, 7);
  lv_obj_add_style(settings_cpu_arc,
                   &style_settings_cpu_arc_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_cpu_arc_main_indicator_default
  static lv_style_t style_settings_cpu_arc_main_indicator_default;
  if (style_settings_cpu_arc_main_indicator_default.prop_cnt > 1)
    lv_style_reset(&style_settings_cpu_arc_main_indicator_default);
  else
    lv_style_init(&style_settings_cpu_arc_main_indicator_default);
  lv_style_set_arc_color(&style_settings_cpu_arc_main_indicator_default,
                         lv_color_make(0x0c, 0xb0, 0x69));
  lv_style_set_arc_width(&style_settings_cpu_arc_main_indicator_default, 7);
  lv_obj_add_style(settings_cpu_arc,
                   &style_settings_cpu_arc_main_indicator_default,
                   LV_PART_INDICATOR | LV_STATE_DEFAULT);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_cpu_arc_main_knob_default
  static lv_style_t style_settings_cpu_arc_main_knob_default;
  if (style_settings_cpu_arc_main_knob_default.prop_cnt > 1)
    lv_style_reset(&style_settings_cpu_arc_main_knob_default);
  else
    lv_style_init(&style_settings_cpu_arc_main_knob_default);
  lv_style_set_bg_color(&style_settings_cpu_arc_main_knob_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_settings_cpu_arc_main_knob_default,
                             lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_cpu_arc_main_knob_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_cpu_arc_main_knob_default, 0);
  lv_style_set_pad_all(&style_settings_cpu_arc_main_knob_default, 0);
  lv_obj_add_style(settings_cpu_arc,
                   &style_settings_cpu_arc_main_knob_default,
                   LV_PART_KNOB | LV_STATE_DEFAULT);
  lv_arc_set_bg_angles(settings_cpu_arc, 0, 360);
  lv_arc_set_angles(settings_cpu_arc, 270, 0);
  lv_arc_set_rotation(settings_cpu_arc, 0);
  lv_obj_set_style_pad_top(settings_cpu_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(settings_cpu_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(settings_cpu_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(settings_cpu_arc, 0, LV_STATE_DEFAULT);
  lv_obj_set_style_arc_rounded(settings_cpu_arc, 0,
                               LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_arc_rounded(settings_cpu_arc, 0, LV_STATE_DEFAULT);

  // Write codes settings_line_2
  settings_line_2 = lv_line_create(settings);
  lv_obj_set_pos(settings_line_2, 140, 26);
  lv_obj_set_size(settings_line_2, 5, 88);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_line_2_main_main_default
  static lv_style_t style_settings_line_2_main_main_default;
  if (style_settings_line_2_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_line_2_main_main_default);
  else
    lv_style_init(&style_settings_line_2_main_main_default);
  lv_style_set_line_color(&style_settings_line_2_main_main_default,
                          lv_color_make(0xa3, 0xa3, 0xa3));
  lv_style_set_line_width(&style_settings_line_2_main_main_default, 3);
  lv_style_set_line_rounded(&style_settings_line_2_main_main_default, true);
  lv_obj_add_style(settings_line_2,
                   &style_settings_line_2_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  static lv_point_t settings_line_2_points[] = {
      {0, 0},
      {0, 110},
  };
  lv_line_set_points(settings_line_2, settings_line_2_points, 2);

  // Write codes settings_label_1
  settings_label_1 = lv_label_create(settings);
  lv_obj_set_pos(settings_label_1, 117, 46);
  lv_obj_set_size(settings_label_1, 18, 69);
  lv_label_set_text(settings_label_1, "MEM");
  lv_label_set_long_mode(settings_label_1, LV_LABEL_LONG_WRAP);
  lv_obj_set_style_text_align(settings_label_1, LV_TEXT_ALIGN_CENTER, 0);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_label_1_main_main_default
  static lv_style_t style_settings_label_1_main_main_default;
  if (style_settings_label_1_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_label_1_main_main_default);
  else
    lv_style_init(&style_settings_label_1_main_main_default);
  lv_style_set_radius(&style_settings_label_1_main_main_default, 0);
  lv_style_set_bg_color(&style_settings_label_1_main_main_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_settings_label_1_main_main_default,
                             lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_label_1_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_label_1_main_main_default, 0);
  lv_style_set_text_color(&style_settings_label_1_main_main_default,
                          lv_color_make(0xff, 0xff, 0xff));
//   lv_style_set_text_font(&style_settings_label_1_main_main_default,
//                          &lv_font_arial_18);
  lv_style_set_text_letter_space(&style_settings_label_1_main_main_default, 2);
  lv_style_set_pad_left(&style_settings_label_1_main_main_default, 0);
  lv_style_set_pad_right(&style_settings_label_1_main_main_default, 0);
  lv_style_set_pad_top(&style_settings_label_1_main_main_default, 0);
  lv_style_set_pad_bottom(&style_settings_label_1_main_main_default, 0);
  lv_obj_add_style(settings_label_1,
                   &style_settings_label_1_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes settings_mem_percent_lable
  settings_mem_percent_lable = lv_label_create(settings);
  lv_obj_set_pos(settings_mem_percent_lable, 48, 66);
  lv_obj_set_size(settings_mem_percent_lable, 37, 16);
  lv_label_set_text(settings_mem_percent_lable, "20%");
  lv_label_set_long_mode(settings_mem_percent_lable, LV_LABEL_LONG_WRAP);
  lv_obj_set_style_text_align(settings_mem_percent_lable,
                              LV_TEXT_ALIGN_CENTER, 0);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_mem_percent_lable_main_main_default
  static lv_style_t style_settings_mem_percent_lable_main_main_default;
  if (style_settings_mem_percent_lable_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_mem_percent_lable_main_main_default);
  else
    lv_style_init(&style_settings_mem_percent_lable_main_main_default);
  lv_style_set_radius(&style_settings_mem_percent_lable_main_main_default, 0);
  lv_style_set_bg_color(&style_settings_mem_percent_lable_main_main_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(
      &style_settings_mem_percent_lable_main_main_default,
      lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_mem_percent_lable_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_mem_percent_lable_main_main_default, 0);
  lv_style_set_text_color(&style_settings_mem_percent_lable_main_main_default,
                          lv_color_make(0xff, 0xff, 0xff));
//   lv_style_set_text_font(&style_settings_mem_percent_lable_main_main_default,
//                          &lv_font_arial_14);
  lv_style_set_text_letter_space(
      &style_settings_mem_percent_lable_main_main_default, 2);
  lv_style_set_pad_left(&style_settings_mem_percent_lable_main_main_default, 0);
  lv_style_set_pad_right(&style_settings_mem_percent_lable_main_main_default,
                         0);
  lv_style_set_pad_top(&style_settings_mem_percent_lable_main_main_default, 0);
  lv_style_set_pad_bottom(&style_settings_mem_percent_lable_main_main_default,
                          0);
  lv_obj_add_style(settings_mem_percent_lable,
                   &style_settings_mem_percent_lable_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes settings_cpu_percent_lable
  settings_cpu_percent_lable = lv_label_create(settings);
  lv_obj_set_pos(settings_cpu_percent_lable, 200, 65);
  lv_obj_set_size(settings_cpu_percent_lable, 37, 16);
  lv_label_set_text(settings_cpu_percent_lable, "20%");
  lv_label_set_long_mode(settings_cpu_percent_lable, LV_LABEL_LONG_WRAP);
  lv_obj_set_style_text_align(settings_cpu_percent_lable,
                              LV_TEXT_ALIGN_CENTER, 0);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_cpu_percent_lable_main_main_default
  static lv_style_t style_settings_cpu_percent_lable_main_main_default;
  if (style_settings_cpu_percent_lable_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_cpu_percent_lable_main_main_default);
  else
    lv_style_init(&style_settings_cpu_percent_lable_main_main_default);
  lv_style_set_radius(&style_settings_cpu_percent_lable_main_main_default, 0);
  lv_style_set_bg_color(&style_settings_cpu_percent_lable_main_main_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(
      &style_settings_cpu_percent_lable_main_main_default,
      lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_cpu_percent_lable_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_cpu_percent_lable_main_main_default, 0);
  lv_style_set_text_color(&style_settings_cpu_percent_lable_main_main_default,
                          lv_color_make(0xff, 0xff, 0xff));
//   lv_style_set_text_font(&style_settings_cpu_percent_lable_main_main_default,
//                          &lv_font_arial_14);
  lv_style_set_text_letter_space(
      &style_settings_cpu_percent_lable_main_main_default, 2);
  lv_style_set_pad_left(&style_settings_cpu_percent_lable_main_main_default, 0);
  lv_style_set_pad_right(&style_settings_cpu_percent_lable_main_main_default,
                         0);
  lv_style_set_pad_top(&style_settings_cpu_percent_lable_main_main_default, 0);
  lv_style_set_pad_bottom(&style_settings_cpu_percent_lable_main_main_default,
                          0);
  lv_obj_add_style(settings_cpu_percent_lable,
                   &style_settings_cpu_percent_lable_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes settings_label_5
  settings_label_5 = lv_label_create(settings);
  lv_obj_set_pos(settings_label_5, 145, 46);
  lv_obj_set_size(settings_label_5, 18, 69);
  lv_label_set_text(settings_label_5, "CPU");
  lv_label_set_long_mode(settings_label_5, LV_LABEL_LONG_WRAP);
  lv_obj_set_style_text_align(settings_label_5, LV_TEXT_ALIGN_CENTER, 0);

  // Write style state: LV_STATE_DEFAULT for
  // style_settings_label_5_main_main_default
  static lv_style_t style_settings_label_5_main_main_default;
  if (style_settings_label_5_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_settings_label_5_main_main_default);
  else
    lv_style_init(&style_settings_label_5_main_main_default);
  lv_style_set_radius(&style_settings_label_5_main_main_default, 0);
  lv_style_set_bg_color(&style_settings_label_5_main_main_default,
                        lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_settings_label_5_main_main_default,
                             lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_settings_label_5_main_main_default,
                           LV_GRAD_DIR_VER);
  lv_style_set_bg_opa(&style_settings_label_5_main_main_default, 0);
  lv_style_set_text_color(&style_settings_label_5_main_main_default,
                          lv_color_make(0xff, 0xff, 0xff));
//   lv_style_set_text_font(&style_settings_label_5_main_main_default,
//                          &lv_font_arial_18);
  lv_style_set_text_letter_space(&style_settings_label_5_main_main_default, 2);
  lv_style_set_pad_left(&style_settings_label_5_main_main_default, 0);
  lv_style_set_pad_right(&style_settings_label_5_main_main_default, 0);
  lv_style_set_pad_top(&style_settings_label_5_main_main_default, 0);
  lv_style_set_pad_bottom(&style_settings_label_5_main_main_default, 0);
  lv_obj_add_style(settings_label_5,
                   &style_settings_label_5_main_main_default,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

}

/*
 * 其他函数请根据需要添加
 */

void display_settings_init(void) {
  lv_obj_t *act_obj = lv_scr_act();  // 获取当前活动页
  if (act_obj == settings) return;
  lv_obj_clean(act_obj);  // 清空此前页面

  lv_scr_load(settings);
}

void display_settings(const char *cur_ver, const char *new_ver,
                      lv_scr_load_anim_t anim_type) {
  display_settings_init();
}

void settings_gui_del(void) {
  if (NULL != settings) {
    lv_obj_clean(settings);
    settings= NULL;

  }
}
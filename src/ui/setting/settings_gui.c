#include "settings_gui.h"

#include "gui_guider.h"
#include "lvgl.h"
#include "stdio.h"

lv_ui guider_ui;

void settings_gui_init(void) { 
  // 初始化ui
  setup_scr_setting_main(&guider_ui); }

/*
 * 其他函数请根据需要添加
 */

void display_settings_init(void) {
  lv_obj_t *act_obj = lv_scr_act();  // 获取当前活动页
  if (act_obj == guider_ui.setting_main) return;
  lv_obj_clean(act_obj);  // 清空此前页面

  lv_scr_load(guider_ui.setting_main);
}

void display_settings(const char *cur_ver, const char *new_ver,
                      lv_scr_load_anim_t anim_type) {
  display_settings_init();
}

void settings_gui_del(void) {
  if (NULL != guider_ui.setting_main) {
    lv_obj_clean(guider_ui.setting_main);
    guider_ui.setting_main = NULL;
  }
}
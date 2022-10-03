#ifndef SCREEN_H
#define SCREEN_H
#include <lvgl.h>

#define LCD_BL_PWM_CHANNEL 0

class Display {
 private:
 public:
  static void init();
  static void routine();
  static void setBackLight(float);

  static void demoInit();
};
void event_handler(lv_event_t *e);

#endif  // SCREEN_H

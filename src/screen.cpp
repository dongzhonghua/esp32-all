#include "screen.h"

#include <SPI.h>
#include <TFT_eSPI.h>
#include <lv_demos.h>
#include <lvgl.h>

/*
TFT pins should be set in
path/to/Arduino/libraries/TFT_eSPI/User_Setups/Setup24_ST7789.h
*/
/*Change to your screen resolution*/
static const uint16_t screenWidth = 160;
static const uint16_t screenHeight = 128;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

void my_print(const char *buf) {
  Serial.printf(buf);
  Serial.flush();
}

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area,
                   lv_color_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors(&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

#ifdef TOUCH_CS
/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  uint16_t touchX, touchY;

  bool touched = tft.getTouch(&touchX, &touchY, 600);

  if (!touched) {
    data->state = LV_INDEV_STATE_REL;
  } else {
    data->state = LV_INDEV_STATE_PR;

    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;

    Serial.print("Data x ");
    Serial.println(touchX);

    Serial.print("Data y ");
    Serial.println(touchY);
  }
}
#endif

void Display::init() {
  // 背光
  ledcSetup(LCD_BL_PWM_CHANNEL, 5000, 8);
  ledcAttachPin(TFT_BLK, LCD_BL_PWM_CHANNEL);
  lv_init();
#if LV_USE_LOG != 0
  lv_log_register_print_cb(my_print);
#endif
  tft.begin();        /* TFT init */
  tft.setRotation(3); /* mirror */

#ifdef TOUCH_CS
  /*Set the touchscreen calibration data,
   the actual data for your display can be acquired using
   the Generic -> Touch_calibrate example from the TFT_eSPI library*/
  uint16_t calData[5] = {275, 3620, 264, 3532, 1};
  tft.setTouch(calData);
#endif

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  // 这里搞清楚干什么的
  /*Initialize the (dummy) input device driver*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  // indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
}

void Display::routine() { lv_task_handler(); }

void Display::setBackLight(float duty) {
  duty = constrain(duty, 0, 1);
  duty = 1 - duty;
  ledcWrite(LCD_BL_PWM_CHANNEL, (int)(duty * 255));
}

void Display::demoInit() {
#if 1
  /* Create simple label */
  lv_obj_t *label = lv_label_create(lv_scr_act());
  lv_label_set_text(label, "hello world!");
  lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
#else
  /* Try an example from the lv_examples Arduino library
     make sure to include it as written above.
  lv_example_btn_1();
 */

  // uncomment one of these demos
  /**
   * 0. 把demo放到合适的路径
   * 1. 各种demo的include路径需要改一下
   * 2. 各种define需要在lv_conf.h里改一下。
   * 其实只要知道demo怎么运行的，根据报错改一下就可以
   *
   */
  // lv_demo_widgets();  // OK
  lv_demo_benchmark();  // OK
  // lv_demo_keypad_encoder();     // works, but I haven't an encoder
  // lv_demo_music();              // NOK
  // lv_demo_printer();
  // lv_demo_stress();             // seems to be OK
#endif
  Serial.println("lvgl demo Setup done");
}

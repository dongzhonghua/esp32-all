#include "screen.h"

#include <SPI.h>
#include <TFT_eSPI.h>
// #include <lv_demos.h>
#include <lvgl.h>

/*
TFT pins should be set in
path/to/Arduino/libraries/TFT_eSPI/User_Setups/Setup24_ST7789.h
*/
/*Change to your screen resolution*/
static const uint16_t screenWidth = 160;
static const uint16_t screenHeight = 128;

static lv_disp_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

void my_print(lv_log_level_t level, const char *file, uint32_t line,
              const char *fun, const char *dsc) {
  Serial.printf("%s@%d %s->%s\r\n", file, line, fun, dsc);
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

lv_indev_t *indev_encoder;
int32_t encoder_diff;
lv_indev_state_t encoder_state;
long last_update_time = 0;
int interval = 200;
bool but_flag = false;

static void touch_read_update() {
  if (millis() - last_update_time > interval) {
    if (touchRead(12) < 40) {
      encoder_state = LV_INDEV_STATE_PR;  //按下
    } else {
      encoder_state = LV_INDEV_STATE_REL;  //松开
    }

    if (touchRead(14) < 40 && but_flag) {
      encoder_diff--;
      but_flag = false;
    } else if (touchRead(27) < 40 && but_flag) {
      encoder_diff++;
      but_flag = false;
    } else {
      but_flag = true;
    }
    last_update_time = millis();
  }
}

static bool encoder_read(lv_indev_drv_t *indev_drv, lv_indev_data_t *data) {
  touch_read_update();

  data->enc_diff = encoder_diff;
  data->state = encoder_state;

  Serial.print("===encoder_read: ");
  Serial.print("encoder_diff: ");
  Serial.print(encoder_diff);

  Serial.print(", encoder_state: ");
  Serial.println(encoder_state);

  encoder_diff = 0;
  return false;
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

  lv_disp_buf_init(&draw_buf, buf, NULL, screenWidth * 10);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.buffer = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /*Register a encoder input device*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_ENCODER;
  indev_drv.read_cb = encoder_read;
  indev_encoder = lv_indev_drv_register(&indev_drv);
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
  lv_obj_t *label;

  lv_obj_t *btn1 = lv_btn_create(lv_scr_act(), NULL); /*创建btn1*/
  lv_obj_set_event_cb(btn1, event_handler);           /*设置btn1回调函数*/
  lv_obj_align(btn1, NULL, LV_ALIGN_CENTER, 0, -40);

  label = lv_label_create(btn1, NULL); /*btn1内创建label*/
  lv_label_set_text(label, "Button");
  printf("%x,btn1:%d\n", btn1, lv_btn_get_state(btn1));
  // button

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
  // lv_demo_benchmark();  // OK
  // lv_demo_keypad_encoder();     // works, but I haven't an encoder
  // lv_demo_music();              // NOK
  // lv_demo_printer();
  // lv_demo_stress();             // seems to be OK
#endif
  Serial.println("lvgl demo Setup done");
}

void event_handler(lv_obj_t *obj, lv_event_t event) {
  if (event == LV_EVENT_CLICKED) {
     Serial.println("Clicked\n");
  } else if (event == LV_EVENT_VALUE_CHANGED) {
    printf("Toggled\n");
  }
  printf("%x,:%d\n", obj, lv_btn_get_state(obj));
}
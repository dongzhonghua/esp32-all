#include "screen.h"

#include <SPI.h>
#include <TFT_eSPI.h>
// #include <lv_demos.h>
#include <lvgl.h>

#include <iostream>

#include "events_init.h"
#include "gui_guider.h"
#include "yx1_160x128.h"
#include "yx2_160x128.h"

static const uint16_t screenWidth = 280;
static const uint16_t screenHeight = 240;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

lv_ui guider_ui;

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

static lv_indev_t *indev_encoder;
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
    if (touchRead(13) < 40) {
      bool is_screen_main = (lv_scr_act() == (&guider_ui)->screen_main);
      bool is_screen_settings = (lv_scr_act() == (&guider_ui)->screen_settings);
      bool is_screen_weather = (lv_scr_act() == (&guider_ui)->screen_weather);
      // std::cout << lv_scr_act() << std::endl;
      // std::cout << (&guider_ui)->screen_main << std::endl;
      // std::cout << is_screen_main << std::endl;
      // std::cout << (&guider_ui)->screen_settings << std::endl;
      // std::cout << is_screen_settings << std::endl;
      // std::cout << (&guider_ui)->screen_weather << std::endl;
      // std::cout << is_screen_weather << std::endl;

      if (is_screen_main) {
        Serial.println("send to main");
        lv_event_send(guider_ui.screen_main, LV_EVENT_RETURN, NULL);
      }
      if (is_screen_settings) {
        Serial.println("send to settings");
        lv_event_send(guider_ui.screen_settings, LV_EVENT_RETURN, NULL);
      }
      if (is_screen_weather) {
        Serial.println("send to weather");
        lv_event_send(guider_ui.screen_weather, LV_EVENT_RETURN, NULL);
      }
    }
  }
}

static void encoder_read(lv_indev_drv_t *indev_drv, lv_indev_data_t *data) {
  touch_read_update();

  data->enc_diff = encoder_diff;
  data->state = encoder_state;

  if (data->enc_diff != 0 || data->state != 0 || millis() % 1000 < 100) {
    Serial.print("===encoder_read: ");
    Serial.print("encoder_diff: ");
    Serial.print(encoder_diff);

    Serial.print(", encoder_state: ");
    Serial.println(encoder_state);
  }

  encoder_diff = 0;
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
  tft.setRotation(1); 

#ifdef TOUCH_CS
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

  /*Register a encoder input device*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_ENCODER;
  indev_drv.read_cb = encoder_read;
  indev_encoder = lv_indev_drv_register(&indev_drv);
  setBackLight(0.5);
}

void Display::routine() { lv_task_handler(); }

void Display::setBackLight(float duty) {
  duty = constrain(duty, 0, 1);
  ledcWrite(LCD_BL_PWM_CHANNEL, (int)(duty * 255));
}

void Display::demoInit() {
#if 1

  // group放到最开始后面的组件默认都会加入到这个group
  lv_group_t *group = lv_group_create();
  lv_group_set_default(group);
  lv_indev_set_group(indev_encoder, group);

  // gui guider生成的ui
  setup_ui(&guider_ui);
  events_init(&guider_ui);

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
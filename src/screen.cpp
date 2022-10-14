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

static void encoder_read(lv_indev_drv_t *indev_drv, lv_indev_data_t *data) {
  touch_read_update();

  data->enc_diff = encoder_diff;
  data->state = encoder_state;

  Serial.print("===encoder_read: ");
  Serial.print("encoder_diff: ");
  Serial.print(encoder_diff);

  Serial.print(", encoder_state: ");
  Serial.println(encoder_state);


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
  lv_obj_t *label = lv_label_create(lv_scr_act());
  lv_label_set_text(label, "hello world!");
  lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

  // button
  lv_obj_t *btn1 = lv_btn_create(lv_scr_act());
  lv_obj_add_event_cb(btn1, event_handler, LV_EVENT_ALL, NULL);
  lv_obj_align(btn1, LV_ALIGN_CENTER, 40, -40);  //设置为中心位置的下面40个像素

  label = lv_label_create(btn1);
  lv_label_set_text(label, "Button");
  lv_obj_center(label);

  lv_obj_t *btn2 = lv_btn_create(lv_scr_act());
  lv_obj_add_event_cb(btn2, event_handler, LV_EVENT_ALL, NULL);
  lv_obj_align(btn2, LV_ALIGN_CENTER, 40, 40);
  lv_obj_add_flag(btn2, LV_OBJ_FLAG_CHECKABLE);
  lv_obj_set_height(btn2, LV_SIZE_CONTENT);

  label = lv_label_create(btn2);
  lv_label_set_text(label, "Toggle");
  lv_obj_center(label);

  // 开关
  lv_obj_t *sw = lv_switch_create(lv_scr_act());  //创建一个开关控件
  lv_obj_align(sw, LV_ALIGN_CENTER, -40, 40);
  lv_obj_add_event_cb(sw, event_handler, LV_EVENT_ALL,
                      NULL);               //将该控件添加到事件当中
  lv_obj_add_state(sw, LV_STATE_CHECKED);  //打开开关

  // 复选框
  lv_obj_t *cb = lv_checkbox_create(lv_scr_act());
  lv_checkbox_set_text(cb, "book");             //设置控件名称
  lv_obj_align(cb, LV_ALIGN_CENTER, -40, -40);  //居中显示
  lv_obj_add_event_cb(cb, event_handler, LV_EVENT_ALL, NULL);  //为控件添加事件

  // 文本框
  // lv_obj_t *ta = lv_textarea_create(lv_scr_act());
  // lv_textarea_set_one_line(ta, true);         //设置为单行输入
  // lv_obj_align(ta, LV_ALIGN_TOP_MID, 0, 0);  //顶部居中对齐
  // lv_obj_add_state(ta, LV_STATE_FOCUSED);   /*To be sure the cursor is
  // visible*/ lv_textarea_add_text(ta, "hello world");  //显示指定内容

  // 画线
  static lv_point_t line_points[] = {{0, 0}, {10, 10}};
  lv_obj_t *line1;
  line1 = lv_line_create(lv_scr_act());
  lv_line_set_points(line1, line_points, 5); /*Set the points*/
  lv_obj_center(line1);

  lv_group_t *group = lv_group_create();
  lv_group_add_obj(group, label);
  lv_group_add_obj(group, btn1);
  lv_group_add_obj(group, btn2);
  lv_group_add_obj(group, sw);
  lv_group_add_obj(group, cb);
  lv_indev_set_group(indev_encoder, group);

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

void event_handler(lv_event_t *e) {
  Serial.println("event_handler---------\n");
  lv_event_code_t code = lv_event_get_code(e);
  if (code == LV_EVENT_CLICKED) {
    Serial.println("Clicked\n");
  } else if (code == LV_EVENT_VALUE_CHANGED) {
    Serial.println("Toggled\n");
  }
}

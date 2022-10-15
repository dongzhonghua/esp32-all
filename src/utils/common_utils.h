#ifndef COMMON_UTILS_H
#define COMMON_UTILS_H

#include <ArduinoJson.h>

#include <map>

#include "Arduino.h"
// #include "bilibili.h"

const String weekEnglish[7] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                               "Thursday", "Friday", "Saturday"};
const String weekDays[7] = {"周日", "周一", "周二", "周三",
                            "周四", "周五", "周六"};

// 用于蜂鸣器
const int freq = 2000;//设置频率
const int channel = 1;//通道号，取值0 ~ 15
const int resolution = 8;//计数位数，2的8次幂=256


void displayWeather(String json);

void chip_info(void);
void set_up_buzzer();
void buzzer_fail();
void buzzer_success();
void got_touch();
void touch_read();

#endif  //
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

void displayWeather(String json);

void chip_info(void);
#endif  //
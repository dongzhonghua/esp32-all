#include <ArduinoJson.h>

#include <map>

#include "Arduino.h"
// #include "bilibili.h"

String weekEnglish[7] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday"};
String weekDays[7] = {"周日", "周一", "周二", "周三", "周四", "周五", "周六"};

std::map<String, char> icon_map{
    {"0", 'B'},  {"1", '2'},  {"2", '1'},  {"3", '2'},  {"4", 'Y'},
    {"5", 'H'},  {"6", '4'},  {"7", 'H'},  {"8", '4'},  {"9", 'N'},
    {"10", 'Q'}, {"11", 'O'}, {"12", '0'}, {"13", 'Q'}, {"14", 'Q'},
    {"15", 'R'}, {"16", 'R'}, {"17", 'R'}, {"18", 'R'}, {"19", 'X'},
    {"20", 'T'}, {"21", 'U'}, {"22", 'V'}, {"23", 'V'}, {"24", 'W'},
    {"25", 'X'}, {"26", 'E'}, {"27", 'E'}, {"28", 'E'}, {"29", '9'},
    {"30", 'M'}, {"31", 'J'}, {"32", 'F'}, {"33", 'F'}, {"34", 'F'},
    {"35", 'F'}, {"36", 'F'}, {"37", 'g'}, {"38", '1'}, {"99", ')'}};

void displayWeather(String json) {
  DynamicJsonDocument doc(512);

  deserializeJson(doc, json);
  JsonObject results = doc["results"][0];

  const char* city = results["location"]["name"];  // 北京

  JsonObject results_0_now = results["now"];
  // https://seniverse.yuque.com/books/share/e52aa43f-8fe9-4ffa-860d-96c0f3cf1c49/yev2c3
  const char* weather = results_0_now["text"];             // "晴"
  const char* icon = results_0_now["code"];                // "0"
  const char* temperature = results_0_now["temperature"];  // "27"

  Serial.print("City: ");
  Serial.print(city);
  Serial.print(", Weather: ");
  Serial.print(weather);
  Serial.print(", Icon: ");
  Serial.print(icon);
  Serial.print(", Temperature: ");
  Serial.print(temperature);
  Serial.println();

  // u8g2.firstPage();
  // do {
  //   u8g2.setFont(u8g2_font_7x14B_tf);
  //   u8g2.drawUTF8(0, 10, city);

  //   u8g2.setFont(myFont);
  //   u8g2.enableUTF8Print();
  //   u8g2.setCursor(60, 62);
  //   u8g2.print("温度");

  //   u8g2.setFont(u8g2_font_7x14B_tf);
  //   u8g2.setCursor(90, 62);
  //   u8g2.print(":" + String(temperature) + "\xb0" + "C");
  //   u8g2.setCursor(100, 10);
  //   u8g2.print(date);
  //   u8g2.setCursor(50, 10);
  //   u8g2.print(weekEnglish[weekDay]);

  //   u8g2.setFont(u8g2_font_ncenB18_tn);
  //   u8g2.setCursor(60, 40);
  //   u8g2.print(currentTime);

  //   u8g2.setFont(weatherFont);
  //   u8g2.setCursor(0, 62);
  //   u8g2.print(icon_map[icon]);
  // } while (u8g2.nextPage());
}

void chip_info(void) {
  // // Internal RAM
  // uint32_t getHeapSize();     // total heap size 全部的片内内存大小
  // uint32_t getFreeHeap();     // available heap  可以内存大小
  // uint32_t getMinFreeHeap();  // lowest level of free heap since boot
  // uint32_t
  // getMaxAllocHeap();  // largest block of heap that can be allocated at once

  // // SPI RAM 外设需要自己设计
  // uint32_t getPsramSize();
  // uint32_t getFreePsram();
  // uint32_t getMinFreePsram();
  // uint32_t getMaxAllocPsram();

  uint64_t chip_id;

  chip_id = ESP.getEfuseMac();  // The chip ID is essentially its MAC
                                // address(length: 6 bytes).
  Serial.printf("ESP32 Chip ID = %04X",
                (uint16_t)(chip_id >> 32));    // print High 2 bytes
  Serial.printf("%08X\n", (uint32_t)chip_id);  // print Low 4bytes.
  Serial.printf("total heap size = %u\n", ESP.getHeapSize());
  Serial.printf("available heap = %u\n", ESP.getFreeHeap());
  Serial.printf("lowest level of free heap since boot = %u\n",
                ESP.getMinFreeHeap());
  Serial.printf("largest block of heap that can be allocated at once = %u\n",
                ESP.getMaxAllocHeap());

  Serial.printf("total Psram size = %u\n", ESP.getPsramSize());
  Serial.printf("available Psram = %u\n", ESP.getFreePsram());
  Serial.printf("lowest level of free Psram since boot = %u\n",
                ESP.getMinFreePsram());
  Serial.printf("largest block of Psram that can be allocated at once = %u\n",
                ESP.getMinFreePsram());

  Serial.printf("get Chip Revision = %u\n", ESP.getChipRevision());
  Serial.printf("getCpuFreqMHz = %u\n", ESP.getCpuFreqMHz());
  Serial.printf("get Cycle Count = %u\n", ESP.getCycleCount());
  Serial.printf("get SdkVersion = %s\n", ESP.getSdkVersion());
}
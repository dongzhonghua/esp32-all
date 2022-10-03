#include "common_utils.h"

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

void set_up_buzzer() {
  ledcSetup(channel, freq, resolution);
  ledcAttachPin(33, channel);
  ledcWrite(channel, 0);
}

void buzzer_fail() {
  ledcWrite(channel, 200);
  delay(500);
  ledcWrite(channel, 0);
}

void buzzer_success() {
  ledcWrite(channel, 100);
  delay(100);
  ledcWrite(channel, 0);
  delay(50);
  ledcWrite(channel, 100);
  delay(100);
  ledcWrite(channel, 0);
}

void got_touch() {
  Serial.print("12: ");
  Serial.println(touchRead(12));
}
void touch_read() {
  // Serial.print("12: ");
  // Serial.println(touchRead(12));
  // Serial.print("14: ");
  // Serial.println(touchRead(14));
  // Serial.print("27: ");
  // Serial.println(touchRead(27));
  touchAttachInterrupt(12, got_touch, 40);
}
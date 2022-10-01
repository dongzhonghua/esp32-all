#include "ssd1306.h"

void SSD1306::init() {
  display_ = Adafruit_SSD1306(128, 64, &Wire);
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display_.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {  // Address 0x3C for 128x32
    Serial.println("SSD1306 allocation failed");
    for (;;)
      ;
  }
  display_.display();
  delay(500);
  display_.setTextSize(1);
  display_.setTextColor(WHITE);
  display_.setRotation(0);
  Serial.println("SSD1306 initialized...");
  last_update_time_ = millis();
}

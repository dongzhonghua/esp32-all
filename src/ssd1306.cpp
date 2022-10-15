#include "ssd1306.h"
#include "utils/common_utils.h"

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

void ssd1306_display(SSD1306 &ssd1306, IMU &mpu, Network &wifi, int interval) {
  if (millis() - ssd1306.lastUpdateTime() > 2 * interval) {
    ssd1306.setLastUpdateTime(millis());
  }

  if (millis() - ssd1306.lastUpdateTime() > interval) {
    ssd1306.getDisplay()->clearDisplay();
    ssd1306.getDisplay()->setCursor(0, 0);

    ssd1306.getDisplay()->println("Accelerometer - m/s^2");
    ssd1306.getDisplay()->print(mpu.getAccelX(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getAccelY(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getAccelZ(), 1);
    ssd1306.getDisplay()->println("");

    ssd1306.getDisplay()->println("Gyroscope - rps");
    ssd1306.getDisplay()->print(mpu.getGyroX(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getGyroY(), 1);
    ssd1306.getDisplay()->print(", ");
    ssd1306.getDisplay()->print(mpu.getGyroZ(), 1);
    ssd1306.getDisplay()->println("");

    ssd1306.getDisplay()->display();
  } else {
    ssd1306.getDisplay()->clearDisplay();
    ssd1306.getDisplay()->setCursor(0, 0);
    ssd1306.getDisplay()->println(wifi.getIpStr());
    ssd1306.getDisplay()->println(wifi.getTime());

    ssd1306.getDisplay()->print("Heap: ");
    ssd1306.getDisplay()->print(ESP.getFreeHeap());
    ssd1306.getDisplay()->print(" / ");
    ssd1306.getDisplay()->print(ESP.getHeapSize());
    // todo cpu利用率
    ssd1306.getDisplay()->print("CPU: ");
    ssd1306.getDisplay()->print(ESP.getCpuFreqMHz());
    ssd1306.getDisplay()->print(" / ");
    ssd1306.getDisplay()->print(ESP.getChipCores());
    ssd1306.getDisplay()->println("");

    ssd1306.getDisplay()->display();
  }

  // ssd1306.getDisplay()->clearDisplay();
  // ssd1306.getDisplay()->drawBitmap(0, 0, epd_bitmap_16_2x, 64, 64, WHITE);
  // ssd1306.getDisplay()->display();

  // displayWeather(wifi.openWeather()); 

}
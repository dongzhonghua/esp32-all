#ifndef SSD1306_H
#define SSD1306_H
#include <Adafruit_SSD1306.h>
#include "imu.h"
#include "network.h"

class SSD1306 {
 private:
  Adafruit_SSD1306 display_;

  unsigned long last_update_time_;

 public:
  void init();

  Adafruit_SSD1306* getDisplay() { return &display_; }

  unsigned long lastUpdateTime() const { return last_update_time_; }
  void setLastUpdateTime(unsigned long lastUpdateTime) {
    last_update_time_ = lastUpdateTime;
  }
};

void ssd1306_display(SSD1306 &ssd1306, IMU &mpu, Network &wifi, int interval = 4000);

#endif
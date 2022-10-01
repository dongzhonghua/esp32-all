#ifndef SSD21306_H
#define SSD21306_H
#include <Adafruit_SSD1306.h>

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

#endif
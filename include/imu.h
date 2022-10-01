#ifndef IMU_H
#define IMU_H

#include <Adafruit_MPU6050.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#define IMU_I2C_SDA 21
#define IMU_I2C_SCL 22

class IMU {
 private:
  Adafruit_MPU6050 imu_;
  int flag;
  float ax_, ay_, az_;
  float gx_, gy_, gz_;
  float temperature_;

  unsigned long last_update_time_;

 public:
  void init();

  void update(bool debug, int interval = 100);  // ms

  float getAccelX();

  float getAccelY();

  float getAccelZ();

  float getGyroX();

  float getGyroY();

  float getGyroZ();

  float getTemperature();

  unsigned long lastUpdateTime() const { return last_update_time_; }
  void setLastUpdateTime(unsigned long last_update_time) {
    last_update_time_ = last_update_time;
  }
};

#endif
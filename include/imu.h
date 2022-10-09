#ifndef IMU_H
#define IMU_H

#include <Adafruit_MPU6050.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#include <ArduinoJson.h>

#define IMU_I2C_SDA 21
#define IMU_I2C_SCL 22

class IMU {
 private:
  Adafruit_MPU6050 imu_;
  int flag;
  float ax_, ay_, az_;
  float gx_, gy_, gz_;
  float temperature_;

  float gyro_x_;
  float gyro_y_;
  float gyro_z_;

  unsigned long last_update_time_;

  //陀螺仪传感器偏差
  float gyro_x_error_ = 0.08;
  float gyro_y_error_ = 0.06;
  float gyro_z_error_ = 0.04;

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

  String getTemperatureStr();

  String getGyroReadings();

  String getAccReadings();

  unsigned long lastUpdateTime() const { return last_update_time_; }

  void setLastUpdateTime(unsigned long last_update_time) {
    last_update_time_ = last_update_time;
  }

  float gyroX() const { return gyro_x_; }
  void setGyroX(float gyro_x) { gyro_x_ = gyro_x; }

  float gyroY() const { return gyro_y_; }
  void setGyroY(float gyro_y) { gyro_y_ = gyro_y; }

  float gyroZ() const { return gyro_z_; }
  void setGyroZ(float gyro_z) { gyro_z_ = gyro_z; }
};

#endif
#include "imu.h"

void IMU::init() {
  auto start = millis();
  Serial.println("init MPU6050...");
  if (!imu_.begin() && millis() - start > 10000) {
    delay(10);
    Serial.print(".");
  }
  Serial.println("MPU6050 succeed...");
}

void IMU::update(bool debug, int interval) {
  sensors_event_t accel, gyro, temperature;
  imu_.getEvent(&accel, &gyro, &temperature);

  ax_ = accel.acceleration.x;
  ay_ = accel.acceleration.y;
  az_ = accel.acceleration.z;

  gx_ = gyro.gyro.x;
  gy_ = gyro.gyro.y;
  gz_ = gyro.gyro.z;

  temperature_ = temperature.temperature;

  if (debug) {
    Serial.print("Accelerometer ");
    Serial.print("X: ");
    Serial.print(ax_, 1);
    Serial.print(" m/s^2, ");
    Serial.print("Y: ");
    Serial.print(ay_, 1);
    Serial.print(" m/s^2, ");
    Serial.print("Z: ");
    Serial.print(az_, 1);
    Serial.println(" m/s^2");

    Serial.print("Gyroscope ");
    Serial.print("X: ");
    Serial.print(gx_, 1);
    Serial.print(" rps, ");
    Serial.print("Y: ");
    Serial.print(gy_, 1);
    Serial.print(" rps, ");
    Serial.print("Z: ");
    Serial.print(gz_, 1);
    Serial.println(" rps");

    Serial.print("Temperature ");
    Serial.print(temperature_, 1);
    Serial.println(" C");
  }
}
float IMU::getAccelX() { return ax_; }

float IMU::getAccelY() { return ay_; }

float IMU::getAccelZ() { return az_; }

float IMU::getGyroX() { return gx_; }

float IMU::getGyroY() { return gy_; }

float IMU::getGyroZ() { return gz_; }

float IMU::getTemperature() { return temperature_; }

String IMU::getGyroReadings() {
  DynamicJsonDocument readings(128);
  if (abs(gx_) > gyro_x_error_) {
    gyro_x_ += gx_ / 20.0;
  }

  if (abs(gy_) > gyro_y_error_) {
    gyro_y_ += gy_ / 20.0;
  }

  if (abs(gz_) > gyro_x_error_) {
    gyro_z_ += gz_ / 20.0;
  }

  readings["gyroX"] = String(gyro_x_);
  readings["gyroY"] = String(gyro_y_);
  readings["gyroZ"] = String(gyro_z_);

  String gyroString = "";
  serializeJson(readings, gyroString);
  return gyroString;
}

String IMU::getAccReadings() {
  DynamicJsonDocument readings(128);

  // 读取当前加速度计的值
  readings["accX"] = String(ax_);
  readings["accY"] = String(ay_);
  readings["accZ"] = String(az_);
  String accString = "";
  serializeJson(readings, accString);
  return accString;
}

String IMU::getTemperatureStr() { return String(temperature_); }
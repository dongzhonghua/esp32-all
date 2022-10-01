#include "imu.h"

void IMU::init() {
  if (!imu_.begin()) {
    Serial.println("Sensor init failed");
    while (1) yield();
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

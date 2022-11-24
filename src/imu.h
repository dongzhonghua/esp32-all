#ifndef IMU_H
#define IMU_H

// #include <Adafruit_MPU6050.h>
// #include <Adafruit_SSD1306.h>
// #include <Adafruit_Sensor.h>
#include <ArduinoJson.h>

#include "MPU6050_6Axis_MotionApps20.h"
#include "Wire.h"

#define IMU_I2C_SDA 21
#define IMU_I2C_SCL 22

#define SENSORS_GRAVITY_EARTH (9.80665F)
#define SENSORS_DPS_TO_RADS (0.017453293F)

#define ACTION_HISTORY_BUF_LEN 5

extern const char *active_type_info[];

enum ACTIVE_TYPE {
  TURN_RIGHT = 0,
  RETURN,
  TURN_LEFT,
  UP,
  DOWN,
  GO_FORWORD,
  SHAKE,
  UNKNOWN
};

// 方向类型
enum MPU_DIR_TYPE {
  NORMAL_DIR_TYPE = 0,
  X_DIR_TYPE = 0x01,
  Y_DIR_TYPE = 0x02,
  Z_DIR_TYPE = 0x04,
  XY_DIR_TYPE = 0x08
};

struct SysMpuConfig {
  int16_t x_gyro_offset;
  int16_t y_gyro_offset;
  int16_t z_gyro_offset;

  int16_t x_accel_offset;
  int16_t y_accel_offset;
  int16_t z_accel_offset;
};

struct ImuAction {
  volatile ACTIVE_TYPE active;
  boolean isValid;
  boolean long_time;
  int16_t v_ax;  // v表示虚拟参数（用于调整6050的初始方位）
  int16_t v_ay;
  int16_t v_az;
  int16_t v_gx;
  int16_t v_gy;
  int16_t v_gz;
};

class My_MPU6050 {
 private:
  int flag;
  float ax_, ay_, az_;
  float gx_, gy_, gz_;
  float temperature_;

  float gyro_x_;
  float gyro_y_;
  float gyro_z_;

  unsigned long last_update_time_;
  uint8_t order;  // 表示方位，x与y是否对换

  //陀螺仪传感器偏差
  float gyro_x_error_ = 0.08;
  float gyro_y_error_ = 0.06;
  float gyro_z_error_ = 0.04;

  MPU6050 mpu;
  bool dmpReady = false;  // set true if DMP init was successful
  uint8_t mpuIntStatus;   // holds actual interrupt status byte from MPU
  uint8_t devStatus;  // return status after each device operation (0 = success,
                      // !0 = error)
  uint16_t packetSize;     // expected DMP packet size (default is 42 bytes)
  uint16_t fifoCount;      // count of all bytes currently in FIFO
  uint8_t fifoBuffer[64];  // FIFO storage buffer

  // orientation/motion vars
  Quaternion q;    // [w, x, y, z]         quaternion container
  VectorInt16 aa;  // [x, y, z]            accel sensor measurements
  VectorInt16
      aaReal;  // [x, y, z]            gravity-free accel sensor measurements
  VectorInt16
      aaWorld;  // [x, y, z]            world-frame accel sensor measurements
  VectorFloat gravity;
  float ypr[3];

 public:
  ImuAction action_info;
  // 用来储存历史动作
  // std::list<ACTIVE_TYPE> act_info_history;
  ACTIVE_TYPE act_info_history[ACTION_HISTORY_BUF_LEN];
  int act_info_history_ind;  // 标志储存的位置

 public:
  My_MPU6050();
  void init();

  void setOrder(uint8_t order);  // 设置方向
  bool Encoder_GetIsPush(void);  // 适配Peak的编码器中键 开关机使用
  ImuAction *update(int interval);
  ImuAction *getAction(void);  // 获取动作
  void getVirtureMotion6(ImuAction *action_info);

  void update(bool debug, int interval = 100);  // ms
  String getGyroReadings();
  String getAccReadings() {
    DynamicJsonDocument readings(128);

    // 读取当前加速度计的值
    readings["accX"] = String(ax_);
    readings["accY"] = String(ay_);
    readings["accZ"] = String(az_);
    String accString = "";
    serializeJson(readings, accString);
    return accString;
  }
  String getTemperatureStr() { return String(temperature_); }

  float ax() const { return ax_; }
  void setAx(float ax) { ax_ = ax; }

  float ay() const { return ay_; }
  void setAy(float ay) { ay_ = ay; }

  float az() const { return az_; }
  void setAz(float az) { az_ = az; }

  float gx() const { return gx_; }
  void setGx(float gx) { gx_ = gx; }

  float gy() const { return gy_; }
  void setGy(float gy) { gy_ = gy; }

  float gz() const { return gz_; }
  void setGz(float gz) { gz_ = gz; }

  float temperature() const { return temperature_; }
  void setTemperature(float temperature) { temperature_ = temperature; }

  float gyroX() const { return gyro_x_; }
  void setGyroX(float gyro_x) { gyro_x_ = gyro_x; }

  float gyroY() const { return gyro_y_; }
  void setGyroY(float gyro_y) { gyro_y_ = gyro_y; }

  float gyroZ() const { return gyro_z_; }
  void setGyroZ(float gyro_z) { gyro_z_ = gyro_z; }
};

#endif

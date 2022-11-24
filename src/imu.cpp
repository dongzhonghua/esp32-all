#include "imu.h"

const char *active_type_info[] = {"TURN_RIGHT", "RETURN", "TURN_LEFT",
                                  "UP",         "DOWN",   "GO_FORWORD",
                                  "SHAKE",      "UNKNOWN"};

My_MPU6050::My_MPU6050() {
  action_info.isValid = false;
  action_info.active = ACTIVE_TYPE::UNKNOWN;
  action_info.long_time = true;
  // 初始化数据
  for (int pos = 0; pos < ACTION_HISTORY_BUF_LEN; ++pos) {
    // act_info_history.push_back(UNKNOWN);
    act_info_history[pos] = UNKNOWN;
  }
  act_info_history_ind = ACTION_HISTORY_BUF_LEN - 1;
  this->order = 0;  // 表示方位
}

void My_MPU6050::init() {
  Serial.println("init MPU6050...");

  Wire.begin();
  Wire.setClock(400000);  // 400kHz I2C clock. Comment this line if having
                          // compilation difficulties
  Serial.begin(115200);
  while (!Serial)
    ;  // wait for Leonardo enumeration, others continue immediately

  // initialize device
  Serial.println(F("Initializing I2C devices..."));
  mpu.initialize();

  // verify connection
  Serial.println(F("Testing device connections..."));
  Serial.println(mpu.testConnection() ? F("MPU6050 connection successful")
                                      : F("MPU6050 connection failed"));

  // load and configure the DMP
  Serial.println(F("Initializing DMP..."));
  devStatus = mpu.dmpInitialize();

  Serial.print(mpu.getXAccelOffset());
  Serial.print("\t");  // -76
  Serial.print(mpu.getYAccelOffset());
  Serial.print("\t");  // -2359
  Serial.print(mpu.getZAccelOffset());
  Serial.print("\t");  // 1688
  Serial.print(mpu.getXGyroOffset());
  Serial.print("\t");  // 0
  Serial.print(mpu.getYGyroOffset());
  Serial.print("\t");  // 0
  Serial.print(mpu.getZGyroOffset());
  Serial.print("\t");  // 0

  // supply your own gyro offsets here, scaled for min sensitivity
  // mpu.setXGyroOffset(220);
  // mpu.setYGyroOffset(76);
  // mpu.setZGyroOffset(0);
  // mpu.setXGyroOffset(-3408);
  // mpu.setYGyroOffset(427);
  // mpu.setZGyroOffset(704);
  // mpu.setZAccelOffset(1788);  // 1688 factory default for my test chip

  // make sure it worked (returns 0 if so)
  if (devStatus == 0) {
    // Calibration Time: generate offsets and calibrate our MPU6050
    mpu.CalibrateAccel(6);
    mpu.CalibrateGyro(6);
    mpu.PrintActiveOffsets();
    // turn on the DMP, now that it's ready
    Serial.println(F("Enabling DMP..."));
    mpu.setDMPEnabled(true);

    // enable Arduino interrupt detection
    Serial.print(
        F("Enabling interrupt detection (Arduino external interrupt "));
    mpuIntStatus = mpu.getIntStatus();

    // set our DMP Ready flag so the main loop() function knows it's okay to use
    // it
    Serial.println(F("DMP ready! Waiting for first interrupt..."));
    dmpReady = true;

    // get expected DMP packet size for later comparison
    packetSize = mpu.dmpGetFIFOPacketSize();
  } else {
    // ERROR!
    // 1 = initial memory load failed
    // 2 = DMP configuration updates failed
    // (if it's going to break, usually the code will be 1)
    Serial.print(F("DMP Initialization failed (code "));
    Serial.print(devStatus);
    Serial.println(F(")"));
  }

  Serial.println("MPU6050 succeed...");
}

void My_MPU6050::setOrder(uint8_t order)  // 设置方向
{
  this->order = order;  // 表示方位
}

void My_MPU6050::update(bool debug, int interval) {
  // if programming failed, don't try to do anything
  if (!dmpReady) return;
  // read a packet from FIFO
  if (mpu.dmpGetCurrentFIFOPacket(fifoBuffer)) {  // Get the Latest packet

    // display Euler angles in degrees
    mpu.dmpGetQuaternion(&q, fifoBuffer);
    mpu.dmpGetGravity(&gravity, &q);
    mpu.dmpGetYawPitchRoll(ypr, &q, &gravity);
    gyro_x_ = ypr[0] * 180 / PI;
    gyro_y_ = ypr[1] * 180 / PI;
    gyro_z_ = ypr[2] * 180 / PI;

    if (debug) {
      Serial.print("ypr\t");
      Serial.print(gyro_x_);
      Serial.print("\t");
      Serial.print(gyro_y_);
      Serial.print("\t");
      Serial.println(gyro_z_);
    }
  }

  int16_t ax, ay, az;
  int16_t gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  temperature_ = mpu.getTemperature() / 340.0 + 36.53;
  ax_ = ax / 16384.0 * SENSORS_GRAVITY_EARTH;
  ay_ = ay / 16384.0 * SENSORS_GRAVITY_EARTH;
  az_ = az / 16384.0 * SENSORS_GRAVITY_EARTH;
  gx_ = gx / 131.0 * SENSORS_DPS_TO_RADS;
  gy_ = gy / 131.0 * SENSORS_DPS_TO_RADS;
  gz_ = gz / 131.0 * SENSORS_DPS_TO_RADS;

  if (debug) {
    Serial.print("a/g:\t");
    Serial.print(ax_);
    Serial.print("\t");
    Serial.print(ay_);
    Serial.print("\t");
    Serial.print(az_);
    Serial.print("\t");
    Serial.print(gx_);
    Serial.print("\t");
    Serial.print(gy_);
    Serial.print("\t");
    Serial.print(gz_);
    Serial.print("\t");
    Serial.println(temperature_);
  }
}

String My_MPU6050::getGyroReadings() {
  DynamicJsonDocument readings(256);
  readings["gyroX"] = String(gyro_x_ * PI / 180);
  readings["gyroY"] = String(gyro_y_ * PI / 180);
  readings["gyroZ"] = String(gyro_z_ * PI / 180);

  readings["angleX"] = String(gyro_x_);
  readings["angleY"] = String(gyro_y_);
  readings["angleZ"] = String(gyro_z_);
  String gyroString = "";
  serializeJson(readings, gyroString);
  return gyroString;
}

ImuAction *My_MPU6050::getAction(void) {
  // 基本方法: 通过对近来的动作数据简单的分析，确定出动作的类型
  ImuAction tmp_info;
  getVirtureMotion6(&tmp_info);

  // Serial.printf("gx = %d\tgy = %d\tgz = %d", tmp_info.v_gx, tmp_info.v_gy,
  // tmp_info.v_gz); Serial.printf("\tax = %d\tay = %d\taz = %d\n",
  // tmp_info.v_ax, tmp_info.v_ay, tmp_info.v_az);

  tmp_info.active = ACTIVE_TYPE::UNKNOWN;

  // 原先判断的只是加速度，现在要加上陀螺仪
  if (ACTIVE_TYPE::UNKNOWN == tmp_info.active) {
    if (tmp_info.v_ay > 4000) {
      tmp_info.active = ACTIVE_TYPE::TURN_LEFT;
    } else if (tmp_info.v_ay < -4000) {
      tmp_info.active = ACTIVE_TYPE::TURN_RIGHT;
    } else if (tmp_info.v_ay > 10000 || tmp_info.v_ay < -10000) {
      // 震动检测
      tmp_info.active = ACTIVE_TYPE::SHAKE;
    }
  }

  if (ACTIVE_TYPE::UNKNOWN == tmp_info.active) {
    if (tmp_info.v_ax > 5000) {
      tmp_info.active = ACTIVE_TYPE::UP;
    } else if (tmp_info.v_ax < -5000) {
      tmp_info.active = ACTIVE_TYPE::DOWN;
    } else if (action_info.v_ax > 10000 || action_info.v_ax < -10000) {
      // 震动检测
      tmp_info.active = ACTIVE_TYPE::SHAKE;
    }
  }

  // 储存当前检测的动作数据到动作缓冲区中
  act_info_history_ind = (act_info_history_ind + 1) % ACTION_HISTORY_BUF_LEN;
  int index = act_info_history_ind;
  act_info_history[index] = tmp_info.active;

  // 本次流程的动作识别
  if (!action_info.isValid) {
    bool isHoldDown = false;  // 长按的标志位
    // 本次流程的动作识别
    int second = (index + ACTION_HISTORY_BUF_LEN - 1) % ACTION_HISTORY_BUF_LEN;
    int third = (index + ACTION_HISTORY_BUF_LEN - 2) % ACTION_HISTORY_BUF_LEN;
    // 先识别"短按" （注：不要写成else if）
    if (ACTIVE_TYPE::UNKNOWN != tmp_info.active) {
      action_info.isValid = 1;
      action_info.active = tmp_info.active;
    }
    // 识别"长按","长按"相对"短按"高级（所以键值升级放在短按之后）
    if (act_info_history[index] == act_info_history[second] &&
        act_info_history[second] == act_info_history[third]) {
      // 目前只识别前后的长按
      if (ACTIVE_TYPE::UP == tmp_info.active) {
        isHoldDown = true;
        action_info.isValid = 1;
        action_info.active = ACTIVE_TYPE::GO_FORWORD;
      } else if (ACTIVE_TYPE::DOWN == tmp_info.active) {
        isHoldDown = true;
        action_info.isValid = 1;
        action_info.active = ACTIVE_TYPE::RETURN;
      }
      // 如需左右的长按可在此处添加"else if"的逻辑

      if (isHoldDown) {
        // 本次识别为长按，则手动清除识别过的历史数据 避免对下次动作识别的影响
        act_info_history[second] = ACTIVE_TYPE::UNKNOWN;
        act_info_history[third] = ACTIVE_TYPE::UNKNOWN;
      }
    }
  }

  return &action_info;
}

void My_MPU6050::getVirtureMotion6(ImuAction *action_info) {
  mpu.getMotion6(&(action_info->v_ax), &(action_info->v_ay),
                 &(action_info->v_az), &(action_info->v_gx),
                 &(action_info->v_gy), &(action_info->v_gz));

  if (order & X_DIR_TYPE) {
    action_info->v_ax = -action_info->v_ax;
    action_info->v_gx = -action_info->v_gx;
  }

  if (order & Y_DIR_TYPE) {
    action_info->v_ay = -action_info->v_ay;
    action_info->v_gy = -action_info->v_gy;
  }

  if (order & Z_DIR_TYPE) {
    action_info->v_az = -action_info->v_az;
    action_info->v_gz = -action_info->v_gz;
  }

  if (order & XY_DIR_TYPE) {
    int16_t swap_tmp;
    swap_tmp = action_info->v_ax;
    action_info->v_ax = action_info->v_ay;
    action_info->v_ay = swap_tmp;
    swap_tmp = action_info->v_gx;
    action_info->v_gx = action_info->v_gy;
    action_info->v_gy = swap_tmp;
  }
}
#include "imu.h"

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

// void My_Adafruit_MPU6050::init() {
//   auto start = millis();
//   Serial.println("init MPU6050...");
//   if (!imu_.begin() && millis() - start > 10000) {
//     delay(10);
//     Serial.print(".");
//   }
//   Serial.println("MPU6050 succeed...");
// }

// void My_Adafruit_MPU6050::update(bool debug, int interval) {
//   sensors_event_t accel, gyro, temperature;
//   imu_.getEvent(&accel, &gyro, &temperature);

//   ax_ = accel.acceleration.x;
//   ay_ = accel.acceleration.y;
//   az_ = accel.acceleration.z;

//   gx_ = gyro.gyro.x;
//   gy_ = gyro.gyro.y;
//   gz_ = gyro.gyro.z;

//   temperature_ = temperature.temperature;

//   if (debug) {
//     Serial.print("Accelerometer ");
//     Serial.print("X: ");
//     Serial.print(ax_, 1);
//     Serial.print(" m/s^2, ");
//     Serial.print("Y: ");
//     Serial.print(ay_, 1);
//     Serial.print(" m/s^2, ");
//     Serial.print("Z: ");
//     Serial.print(az_, 1);
//     Serial.println(" m/s^2");

//     Serial.print("Gyroscope ");
//     Serial.print("X: ");
//     Serial.print(gx_, 1);
//     Serial.print(" rps, ");
//     Serial.print("Y: ");
//     Serial.print(gy_, 1);
//     Serial.print(" rps, ");
//     Serial.print("Z: ");
//     Serial.print(gz_, 1);
//     Serial.println(" rps");

//     // Serial.print("Temperature ");
//     // Serial.print(temperature_, 1);
//     // Serial.println(" C");
//   }
// }

// String My_Adafruit_MPU6050::getGyroReadings() {
//   DynamicJsonDocument readings(128);
//   if (abs(gx_) > gyro_x_error_) {
//     gyro_x_ += gx_ / 90.0;
//   }

//   if (abs(gy_) > gyro_y_error_) {
//     gyro_y_ += gy_ / 90.0;
//   }

//   if (abs(gz_) > gyro_x_error_) {
//     gyro_z_ += gz_ / 90.0;
//   }

//   readings["gyroX"] = String(gyro_x_);
//   readings["gyroY"] = String(gyro_y_);
//   readings["gyroZ"] = String(gyro_z_);

//   String gyroString = "";
//   serializeJson(readings, gyroString);
//   return gyroString;
// }
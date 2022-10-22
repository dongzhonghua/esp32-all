#ifndef NETWORK_H
#define NETWORK_H

#include <HTTPClient.h>
#include <NTPClient.h>
#include <WiFi.h>
#include <WiFiUdp.h>

#define NTP_OFFSET 28800        // In seconds
#define NTP_INTERVAL 60 * 1000  // In miliseconds
#define NTP_ADDRESS "ntp.aliyun.com"
static String API_KEY = "S94ULk7-eEoFMYpga";
static String CITY = "beijing";
class Network {
 private:
  String ip_ = "0.0.0.0";
  HTTPClient http_;

  WiFiUDP ntpUDP_;
  NTPClient* timeClient_;

 public:
  // 这类对象一个普遍的特点就是都有一个init函数，其实可以都放到构造函数里面来做。
  // 但是不这么做的原因是有时候我初始化了一个对象，但是我不想初始化里面的资源
  void init(const String& ssid = "dzh", const String& password = "dzhyx123");
  unsigned int getBilibiliFans(const String& url);
  String openWeather();
  String getIpStr();
  String getTime();
  String get(String url);
};

#endif
#ifndef NETWORK_H
#define NETWORK_H

#include <HTTPClient.h>
#include <NTPClient.h>
#include <WiFi.h>
#include <WiFiUdp.h>

#define NTP_OFFSET 28800        // In seconds
#define NTP_INTERVAL 60 * 1000  // In miliseconds
#define NTP_ADDRESS "ntp.aliyun.com"

class Network {
 private:
  String ip_ = "0.0.0.0";
  HTTPClient http_;

  WiFiUDP ntpUDP_;
  NTPClient *timeClient_;

 public:
  void init(const String& ssid = "dzh", const String& password = "dzhyx123");
  unsigned int getBilibiliFans(const String& url);

  String getIpStr();
  String getTime();
};

#endif
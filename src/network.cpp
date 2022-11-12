#include "network.h"

void Network::init(const String &ssid, const String &password) {
  // Serial.println("scan start");
  // int n = WiFi.scanNetworks();
  // Serial.println("scan done");
  // if (n == 0) {
  //   Serial.println("no networks found");
  // } else {
  //   Serial.print(n);
  //   Serial.println(" networks found");
  //   // for (int i = 0; i < n; ++i) {
  //   //   Serial.print(i + 1);
  //   //   Serial.print(": ");
  //   //   Serial.print(WiFi.SSID(i));
  //   //   Serial.print(" (");
  //   //   Serial.print(WiFi.RSSI(i));
  //   //   Serial.print(")");
  //   //   Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? " " : "*");
  //   //   delay(10);
  //   // }
  // }
  // Serial.println("");
  Serial.print("Connecting: ");
  Serial.print(ssid.c_str());
  Serial.print(" @");
  Serial.println(password.c_str());

  WiFi.begin(ssid.c_str(), password.c_str());
  while (WiFiClass::status() != WL_CONNECTED) {
    delay(200);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("WiFi connected, ");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  ip_ = WiFi.localIP().toString();

  timeClient_ = new NTPClient(ntpUDP_, NTP_ADDRESS, NTP_OFFSET);
  timeClient_->begin();
}

String Network::openWeather() {
  String url = "https://api.seniverse.com/v3/weather/now.json?key=" + API_KEY +
               "&location=" + CITY + "&language=en&unit=c";  // 中文：zh-Hans
  http_.begin(url);
  int httpCode = http_.GET();
  if (httpCode != HTTP_CODE_OK) {
    Serial.printf("[HTTP] GET... failed, error: %s\n",
                  HTTPClient::errorToString(httpCode).c_str());
  }
  String payload = http_.getString();
  http_.end();
  return payload;
}

unsigned int Network::getBilibiliFans(const String &uid) {
  String fansCount = "";
  http_.begin("http://api.bilibili.com/x/relation/stat?vmid=" + uid);

  // start connection and send HTTP headerFFF
  int httpCode = http_.GET();

  // httpCode will be negative on error
  if (httpCode > 0) {
    // file found at server
    if (httpCode == HTTP_CODE_OK) {
      String payload = http_.getString();
      int pos = (payload.indexOf("follower"));
      fansCount = payload.substring(pos + 10, payload.length() - 2);
    }
  } else {
    Serial.printf("[HTTP] GET... failed, error: %s\n",
                  HTTPClient::errorToString(httpCode).c_str());
  }
  http_.end();

  return atol(fansCount.c_str());
}

String Network::getIpStr() { return ip_; }

String Network::getTime() {
  timeClient_->update();
  String formattedTime = timeClient_->getFormattedTime();

  // unsigned long epochTime = timeClient_->getEpochTime();  // 时间戳
  // Serial.print("Epoch Time:");
  // Serial.println(epochTime);

  // //打印时间
  // Serial.println(timeClient_->getFormattedTime());
  // int currentHour = timeClient_->getHours();  // 几点
  // Serial.print("Hour:");
  // Serial.println(currentHour);
  // int currentMinute = timeClient_->getMinutes();  // 几分
  // Serial.print("Minute:");
  // Serial.println(currentMinute);
  // int weekDay = timeClient_->getDay();  // 星期几
  // Serial.print("Week Day:");
  // Serial.println(weekDay);

  // //将epochTime换算成年月日
  // struct tm *ptm = gmtime((time_t *)&epochTime);
  // int monthDay = ptm->tm_mday;
  // Serial.print("Month day:");
  // Serial.println(monthDay);
  // int currentMonth = ptm->tm_mon + 1;
  // Serial.print("Month:");
  // Serial.println(currentMonth);

  return formattedTime;
}

String Network::get(String url) {
  String res;
  http_.begin(url);
  int httpCode = http_.GET();

  // httpCode will be negative on error
  if (httpCode > 0) {
    // file found at server
    if (httpCode == HTTP_CODE_OK) {
      res = http_.getString();
    }
  } else {
    Serial.printf("[HTTP] GET... failed, error: %s\n",
                  HTTPClient::errorToString(httpCode).c_str());
  }
  http_.end();
  return res;
}

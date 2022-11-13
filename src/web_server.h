#ifndef WEB_SERVER_H
#define WEB_SERVER_H

#include <ArduinoJson.h>
#include <ESPAsyncWebServer.h>

#include "FS.h"
#include "SPIFFS.h"
#include "imu.h"

class WebServer {
 public:
  void update();

  void init();

 private:
  AsyncWebServer server_ = AsyncWebServer(80);
  AsyncEventSource events_ = AsyncEventSource("/events");
};

#endif /* WEB_SERVER_H */


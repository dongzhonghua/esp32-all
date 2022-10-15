#ifndef OTA_H
#define OTA_H

class OTA {
 public:
  // setup里调用
  static void init();
  // loop里调用
  static void handle();
};

#endif  // OTA_H
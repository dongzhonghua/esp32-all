#ifndef SPI_FFS_H
#define SPI_FFS_H

#include "FS.h"
#include "SPIFFS.h"

class SPI_FFS {
 public:
  void init();
  
};

void listDir(const char *dirname, uint8_t levels);

void readFile(const char *path);

void writeFile(const char *path, const char *message);

void appendFile(const char *path, const char *message);

void renameFile(const char *path1, const char *path2);

void deleteFile(const char *path);

void testFileIO(const char *path);

#endif  // SPI_FFS_H
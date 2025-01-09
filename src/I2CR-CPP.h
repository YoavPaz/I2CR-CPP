#ifndef I2CR_H
#define I2CR_H

#include <Arduino.h>

class I2CR{
  public:
  I2CR(const int addressList[], int size);
  void begin(int bdrate);
  void check();
  private:
  int* _addList;
  int _size;
};

#endif

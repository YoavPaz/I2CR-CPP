
/*
---------------------------------------
How to use the I2CR library.
---------------------------------------
*/


#include "I2CR-CPP.h"
// includes the library (use <> to include not "")

int addressList[] = {0x27, 0x78, 0x56};
// the address list of all the addresses of your I2C components!

I2CR i2cr(addressList, 3);

void setup() {
  Serial.begin(115200);
  // must:
  i2cr.begin(115200);

  // to check for all the i2c devices in the address list!
  i2cr.check();
}

void loop() {

}

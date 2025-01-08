#include "I2CR.h"
#include <Arduino.h>
#include <Wire.h>

I2CR::I2CR(const int addressList[], int size){
  _size = size;
  _addList = new int[_size];
  for (int i = 0; i < _size; i++){
    _addList[i] = addressList[i];
  }
}

void I2CR::begin(int bdrate){
  Serial.println("I2CR Program Started.");
}

void I2CR::check(){
  Serial.println("I2CR: Checking...");
  for (int i = 0; i < _size; i++){
    byte address = _addList[i];
    Wire.beginTransmission(address);
    byte error = Wire.endTransmission();
    
    if (error == 0){
      Serial.print("I2C is working on address: 0x");
      Serial.println(address, HEX);
    }else{
      Serial.print("I2C is not working on address: 0x");
      Serial.println(address, HEX);
    }
  }
}
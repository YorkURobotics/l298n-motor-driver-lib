#pragma once
#include <Arduino.h>

class L298N
{
public:
  // constructor & destructor
  L298N(byte pinEnable, byte pinIN1, byte pinIN2);
  ~L298N();
  // accessor functions for instance variables
  bool isEngaged();
  byte getSpeed();
  // functions for movement control
  void run(bool direction, byte speed);
  void stop();

private:
  // pin numbers
  byte pinEnable;
  byte pinIN1;
  byte pinIN2;
  // instance variables
  bool engaged;
  byte speed;
};

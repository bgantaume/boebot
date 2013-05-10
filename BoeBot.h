#ifndef BoeBot_h
#define BoeBot_h

#include "Arduino.h"
#include "Servo.h"

class BoeBot 
{
public:
  BoeBot();
  void initialize(int, int);
  void moveForward();  
  void moveBackward();  
  void turnLeft();
  void turnRigth();
  void freeze();
private:
  Servo babord;
  Servo tribord;

};

#endif
#include <TimerOne.h>

void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Timer1.initialize(10);
  Timer1.pwm(9,512);
  Timer1.pwm(10,255);

}

void loop() {
  // put your main code here, to run repeatedly:

}



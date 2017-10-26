int LEDPin = 13;
int LEDMode = 0;
void setup() {
  pinMode(LEDPin,OUTPUT);
  attachInterrupt(0,stuffHappend,RISING);
  Serial.begin(9600);

}

void loop() {
  
}

void stuffHappend(){
  Serial.println("in");
  LEDMode = digitalRead(LEDPin);
  if(LEDMode)
  {digitalWrite(LEDPin,LOW);}
  else
  {digitalWrite(LEDPin,HIGH);}
  
 }

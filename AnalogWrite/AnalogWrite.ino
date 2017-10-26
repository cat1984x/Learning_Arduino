int PWMPin =3;
int analogPin = A5;
int val= 0;
void setup() {
  pinMode(PWMPin,OUTPUT);

}

void loop() {
  val=analogRead(analogPin);
  analogWrite(PWMPin,val/4);

}

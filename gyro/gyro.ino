int GyroPin = A0;
int Gyro=0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  Gyro=analogRead(GyroPin);
  Serial.println(Gyro);
  //delay(1);

}

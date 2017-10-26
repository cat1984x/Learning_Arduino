int inputPin =4;//echo
int outputPin =5;//trig
int distance =0;
void setup() {
  pinMode(inputPin,INPUT);
  pinMode(outputPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(outputPin,LOW);
  delayMicroseconds(2);
  digitalWrite(outputPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(outputPin,LOW);
  distance = pulseIn(inputPin,HIGH);
  distance = distance/58.82;//计算距离
  Serial.println(distance);
  delay(50);
}

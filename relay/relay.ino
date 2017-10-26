int relayPin= 4;
void setup() {
  pinMode(relayPin,OUTPUT);

}

void loop() {
  digitalWrite(relayPin,HIGH);
  delay(50);
  digitalWrite(relayPin,LOW);
  delay(50);

}

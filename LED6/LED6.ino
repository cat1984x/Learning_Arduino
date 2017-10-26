int startPin = 2;
int endPin = 7;
int index = 0;

void setup() {
  for(int i = startPin;i<= endPin;i++){
    pinMode(i,OUTPUT);
    }
}

void loop() {
    for(int i = startPin;i<= endPin;i++){
      digitalWrite(i,LOW);
    }
    digitalWrite(startPin + index,HIGH);
    index = (index + 1)%(endPin - startPin + 1);
    delay(100);
}

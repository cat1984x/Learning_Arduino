const byte pin =10;
byte state =0;
void setup() {
  pinMode(pin,OUTPUT);
  while(true){
      digitalWrite(pin,state);
      state =!state;
    }
}

void loop() {

}

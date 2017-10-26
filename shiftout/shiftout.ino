int dataPin= 11;
int clockPin =12;
int data = 500;
void setup() {
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);

}

void loop() {
  shiftOut(dataPin,clockPin,LSBFIRST,data);

}

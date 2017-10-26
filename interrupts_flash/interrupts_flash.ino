int LEDPin = 13;
volatile boolean fastflash = false;
void setup() {
  pinMode(LEDPin,OUTPUT);
  attachInterrupt(0,stuffHappend,FALLING);

}

void loop() {
  int period =1000;
  if (fastflash) period =100;
  digitalWrite(LEDPin,HIGH);
  delay(period);
  digitalWrite(LEDPin,LOW);
  delay(period);
}

void stuffHappend(){
  fastflash = !fastflash;
 }

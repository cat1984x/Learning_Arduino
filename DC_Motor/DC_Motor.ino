int sleep = 0;
int in1 = 3;
int in2 = 4;
int speedPin = A0;
int speed =0;
void setup() {
  pinMode(sleep,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);

}

void loop() {
  speed=analogRead(speedPin);
   unsigned char i;
   digitalWrite(sleep,HIGH);
      for(i=0;i<80;i++)
    {
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      delay(1);
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      delay(1);
      }

}

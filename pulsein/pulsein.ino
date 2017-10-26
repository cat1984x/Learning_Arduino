int button = 3;
unsigned long  count = 0;
void setup() {
  pinMode(button,INPUT);
  Serial.begin(9600);

}

void loop() {
  count = pulseIn(button,HIGH);
  
  if(count!=0)
  {
    Serial.println(count);
    count = 0;
    }

}

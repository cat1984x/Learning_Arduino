int InfraredPin = A0;//红外检测分压点 RX-1
int MosPin= 0;//mos管，高电平开启 TX-1
int Infrared =0;
void setup() {
  pinMode(MosPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(MosPin,HIGH);//开启MOS管
  Infrared=analogRead(InfraredPin)*200;//读取红外值
  Serial.println(Infrared);
  delay(10);

}

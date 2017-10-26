int sleep = 0; //A3906 sleep脚接Arduino 0
int in1 =3; //A3906 in1脚接Arduino 3
int in2 = 4; //A3906 in2脚接Arduino 4
int in3 = 5;
int speedPin = A0;//电位器，5V分压点
int speed =0;
void setup() {
  pinMode(sleep,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);

}

void loop() {
  digitalWrite(sleep,HIGH);//使能A3906芯片
  speed=analogRead(speedPin);//读取电位器电压
  digitalWrite(in2,LOW);//保持in2低电平，disable模式
  digitalWrite(in3,HIGH);//保持in2高电平，brake模式
  analogWrite(in1,speed/4);//输出PWM给in1
}

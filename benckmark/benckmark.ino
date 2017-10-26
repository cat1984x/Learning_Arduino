void setup() {
  Serial.begin(9600);
  Serial.println("Starting Test");
  long startTime = millis();
  long i =0;
  float j = 0;
  for (i = 0; i < 20000000; i++)
  {
    j = i + i * 10;
    if (j > 10) j = 0;
  }
  long endTime = millis();
  Serial.println(j);
  Serial.println("Finishing Test");
  Serial.println("Seconds taken:");
  Serial.println((endTime-startTime)/1001);
}

void loop() {
  // put your main code here, to run repeatedly:

}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float tempRead  = (analogRead(A0)/1024.0) * 5.0;
  float curTemp = (tempRead -.5) * 100;
  Serial.println(curTemp);
}

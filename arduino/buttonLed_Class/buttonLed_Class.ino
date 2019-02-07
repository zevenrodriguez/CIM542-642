void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int button = digitalRead(2);
  digitalWrite(11,button);
}

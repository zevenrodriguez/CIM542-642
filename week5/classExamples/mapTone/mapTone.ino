#define led 11

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potRead = analogRead(A0);
  //potRead = potRead/4;
  Serial.println(potRead);
  //analogWrite(led, potRead);

  int mapping = map(potRead, 0, 1023, 50, 1000);

  tone(led, mapping, 10);
}

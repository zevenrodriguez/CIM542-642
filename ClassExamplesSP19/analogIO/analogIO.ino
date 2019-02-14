int ledPin1 = 10;
int ledPin2 = 11;

int pot1 = A0;

int potRead = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(ledPin1, HIGH);
  //digitalWrite(ledPin2, HIGH);
  // 0 = off 255 = full brightness

  //mapping method #1
  //potRead = analogRead(pot1)/4;
  potRead = analogRead(pot1);
  int mapped = map(potRead, 10, 700, 0, 255);
  Serial.println(potRead);
  //analogWrite(ledPin1, potRead);
  analogWrite(ledPin1, mapped);

  //  if (potRead < 512) {
  //    analogWrite(ledPin1, 64);
  //    analogWrite(ledPin2, 0);
  //
  //  } else {
  //    analogWrite(ledPin2, 255);
  //    analogWrite(ledPin1, 0);
  //
  //  }



}

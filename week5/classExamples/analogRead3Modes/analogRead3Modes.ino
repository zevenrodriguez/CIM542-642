#define led 13
#define led2 12


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potRead = analogRead(A0);
  Serial.print("potRead: ");
  Serial.println(potRead);

  //  if (potRead < 500) {
  //    digitalWrite(led, HIGH);
  //    digitalWrite(led2, LOW);
  //  }
  //
  //  if (potRead >= 500 && potRead <= 600) {
  //    digitalWrite(led, HIGH);
  //    digitalWrite(led2, HIGH);
  //  }
  //
  //  if (potRead > 600) {
  //    digitalWrite(led, LOW);
  //    digitalWrite(led2, HIGH);
  //  }


  if (potRead < 500) {
    digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);
  } else if (potRead >= 500 && potRead <= 600) {
    digitalWrite(led, HIGH);
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
  }


}

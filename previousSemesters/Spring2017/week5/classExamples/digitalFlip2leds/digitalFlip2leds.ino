#define led 13
#define led2 12
#define button 2

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(button);
  Serial.print("buttonState: ");
  Serial.println(buttonState);

  if (buttonState == 0) {
    digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);

  } else {
    digitalWrite(led2, HIGH);
    digitalWrite(led, LOW);

  }

  //  if(buttonState == 1){
  //
  //    digitalWrite(led2, HIGH);
  //  }

}






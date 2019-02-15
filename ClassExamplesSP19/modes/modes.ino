int switchPin = 2;
int led1 = 3;
int led2 = 4;

int switchRead = 0;

int counter = 0;

boolean wasPressed = false;

long prevMillis = 0;
int interval = 0;
boolean trigger = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  switchRead = digitalRead(switchPin);
  Serial.print("switch: ");
  Serial.print(switchRead);
  //digitalWrite(led1, HIGH);
  //digitalWrite(led2, HIGH);

  if (switchRead == HIGH) {
    wasPressed = true;
  }

  if (switchRead == LOW && wasPressed == true) {
    wasPressed = false;
    counter = counter + 1;
  }

  Serial.print(" counter: ");
  Serial.println(counter);

  if (counter == 0) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    trigger = false;

  } else if (counter == 1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  } else if (counter == 2) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  } else if (counter == 3) {

    if (millis() - prevMillis >= interval) {
      prevMillis = millis();
      if (trigger == false) {
        trigger = true;
      } else {
        trigger = false;
      }
    }

  } else {
    counter = 0;
  }

  if (trigger == true) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

}

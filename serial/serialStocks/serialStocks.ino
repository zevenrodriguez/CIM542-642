int ledPin = 5;
int ledPin2 = 6;
long ledValue = 0;
int switchPin = 2;
int switchState = 0;
int wasPressed = false;

String inputString = "";
boolean stringComplete = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  switchState = digitalRead(switchPin);
  if (switchState == HIGH) {
    wasPressed = true;
  }
  if (switchState == LOW && wasPressed == true) {
    wasPressed = false;
    Serial.println("pressed");
    Serial.flush();

  }

}


void serialEvent() {
  while (Serial.available()) {
    char inChar = Serial.read();

    if (inChar != '\n') {
      inputString += inChar;
    } else {
      stringComplete = true;
    }

    if (stringComplete == true) {
      float curStock = inputString.toFloat();
      Serial.println(curStock);
      Serial.flush();

      // do something with inputString data
      
      
      stringComplete = false;
      inputString = "";
    }

  }
}

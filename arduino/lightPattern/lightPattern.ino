int ledPin0 = 13;
int ledPin1 = 10;
int ledPin2 = 11;

int timeSequence[6] = {2000, 2000, 500, 500, 500, 500};
int timeSequenceLength = 6; //adjust based on number of items in array

int curTime = 0;
long prevMillis = 0;
boolean turnOn = false;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);


}

// the loop function runs over and over again forever
void loop() {

  if (millis() - prevMillis > timeSequence[curTime]) {
    prevMillis = millis();
    if (turnOn == true) {
      turnOn = false;
    } else {
      turnOn = true;
    }

    curTime++;

    if (curTime == timeSequenceLength) {
      curTime = 0;
    }


  }

  if (turnOn == true) {
    digitalWrite(ledPin0, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin0, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
  Serial.print("timeSequence: ");
  Serial.print(timeSequence[curTime]);
  Serial.print(" ");
  Serial.print("curTime: ");
  Serial.print(curTime);
  Serial.print(" ");
  Serial.print("turnOn: ");
  Serial.println(turnOn);


  //delay(30);

}

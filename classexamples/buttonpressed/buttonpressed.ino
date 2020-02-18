/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int ledpin = 3;
boolean pressed = false;

int counter = 0;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(ledpin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.print("buttonState: ");
  Serial.print(buttonState);// is either 1 or 0
  delay(1);        // delay in between reads for stability
  //HIGH = 1 and LOW = 0
  //digitalWrite(ledpin,buttonState);

  //If user is pressing button
  if (buttonState == HIGH) {
    pressed = true;
  }

  //This statement only runs when the user has pressed and released the button
  if (buttonState == LOW && pressed == true) {
    //Do something
    pressed = false;
    Serial.print(" Pressed");

    counter = counter + 1;
  }

  Serial.print("counter");
  Serial.print(counter);

  Serial.println();

  if(counter == 0){
    digitalWrite(ledpin,LOW);
  }else if(counter == 1){
    digitalWrite(ledpin,HIGH);
  }else if(counter == 2){
    //sequence
    digitalWrite(ledpin,HIGH);
    delay(1000);
    digitalWrite(ledpin,LOW);
    delay(1000);
  }else{
    //else reads if not 0 or 1 or 2 then run code below (default condition)
    counter = 0;
  }





}

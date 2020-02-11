
int ledPin = 3;

int counter = 0;

boolean flipflop = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // opens the serial port sets the speed of communication to 9600 buad or bps
  pinMode(ledPin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  //analogWrite goes from 0-255
  //  analogWrite(ledPin,0);
  //  delay(500);
  //  analogWrite(ledPin,127);
  //  delay(500);
  //  analogWrite(ledPin,255);
  //  delay(500);

  counter = counter + 1; // same as counter++;
  
  
  if (counter >= 255) {
    counter = 0;
  }

  
  Serial.println(counter);
  analogWrite(ledPin, counter);
  delay(50);



}

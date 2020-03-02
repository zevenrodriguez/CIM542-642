int ledpin = 3;
int analogpin = A0;
int potRead = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potRead = analogRead(analogpin);
  //potRead = potRead/4;
  //int mappedValue = map(potRead,0,1023,0,255); //led mapped value
  //int mappedValue = map(potRead,330,960,31,4978); // tone mapped value
  int mappedValue = map(potRead,330,960,31,4978); // tone mapped value photocell
  if(mappedValue < 31){
    mappedValue = 31;
  }

  if(mappedValue > 4978){
    mappedValue = 4978;
  }

  Serial.print("Mapped Value: ");
  Serial.print(mappedValue);
  Serial.print(" potRead: ");
  Serial.println(potRead);
  //analogWrite(ledpin,mappedValue);
  tone(ledpin,mappedValue);
}

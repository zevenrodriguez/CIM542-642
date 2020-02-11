
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

  if(flipflop == false){
  counter = counter + 1; // same as counter++;
  }else{
    counter = counter -1;
  }
  
  if (counter >= 255) {
    //counter = 0;
    flipflop = true;
  }

  if(counter <= 0){
    flipflop = false;
  }

  
  Serial.println(counter);
  analogWrite(ledPin, counter);
  delay(10);



}

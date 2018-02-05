const int ledPin0 = 2; 
const int ledPin1 = 3;
const int switchPin0 = 4;



// This is a comment

// Another way to define pins
#define ledP0 2
#define ledP1 3



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(switchPin0, INPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  int switch0Read = digitalRead(switchPin0);

  Serial.print("Switch 0 Value: ");
  Serial.println(switch0Read);
  
  digitalWrite(ledPin0, switch0Read);
  digitalWrite(ledPin1, switch0Read);
}






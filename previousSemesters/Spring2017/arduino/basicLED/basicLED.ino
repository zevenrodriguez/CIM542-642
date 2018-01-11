
#define led 13
#define switch0 2

int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(switch0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, switchState);

  switchState = digitalRead(switch0);
  Serial.print("switchState: ");
  Serial.println(switchState);
}

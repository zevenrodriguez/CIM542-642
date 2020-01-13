
int button1 = 2;
int led1 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1,INPUT);
  pinMode(led1,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int button = digitalRead(button1);
  //Serial.println("button1: " + button1); will not work
  Serial.print("button1: ");
  Serial.println(button);
  digitalWrite(led1,button);
}

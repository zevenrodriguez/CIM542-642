
long prevMillis = 0;
int interval = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(millis() - prevMillis > interval){
    prevMillis = millis();
    //do something
    Serial.println("Timer done");
  }
}

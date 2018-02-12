const int ledPin = 3; 

int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photoRead = analogRead(A0);
  Serial.print("Photo Sensor:");
  Serial.println(photoRead);

  if(photoRead < 30){
    photoRead = 30;
  }

  if(photoRead > 500){
    photoRead = 500;
  }

  sensorValue = map(photoRead, 30,500, 0,255);

  
  
  Serial.print("SensorValue: ");
  Serial.println(sensorValue);
  analogWrite(ledPin, sensorValue);

}

int tonePin = 8;
int photoPin = A0;
int photoRead = 0;

int lowLimit = 30;
int highLimit = 600;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  //input
  photoRead = analogRead(photoPin);
  Serial.print("pre-limit ");
  Serial.print(photoRead);

  if (photoRead < lowLimit) {
    photoRead = lowLimit;
  }

  if(photoRead > highLimit){
    photoRead = highLimit;
  }

  int mapped = map(photoRead, 0, 600, 31, 4978);
  Serial.print(" post-limit ");
  Serial.print(photoRead);
  Serial.print(" mapped: ");
  Serial.println(mapped);

  //output
  tone(tonePin, mapped, 100);

}

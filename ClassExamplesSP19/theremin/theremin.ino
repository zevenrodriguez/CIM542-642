int tonePin = 8;


int photoPin = A0;

int photoRead = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 

}

void loop() {

  photoRead = analogRead(photoPin);
  int mapped = map(photoRead, 0, 350, 31, 4978);
  Serial.println(photoRead);
  tone(tonePin,mapped,100);


}

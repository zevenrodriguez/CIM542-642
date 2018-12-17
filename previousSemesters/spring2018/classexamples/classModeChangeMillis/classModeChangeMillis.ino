const int switch1 = 4;
const int led1Pin = 3;

boolean pressing = false;

int counter = 0;

int interval = 1000;
long prevMillis = 0;

boolean flipFlop = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(switch1, INPUT);
  pinMode(led1Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switch1Read = digitalRead(switch1);
  //Serial.println(switch1Read);

  if (switch1Read == 1) {
    pressing = true;
  }

  //  if(switch1Read == 0){
  //    // count by 1
  //    if(pressing == true){
  //      Serial.print("click: ");
  //      counter = counter + 1;
  //      Serial.println(counter);
  //      //counter++;
  //
  //      pressing = false;
  //    }
  //  }

  if (switch1Read == 0 && pressing == true) {
    counter++;
    Serial.print("click: ");
    Serial.println(counter);
    pressing = false;
  }

  if (counter == 0) {
    // led is off
    digitalWrite(led1Pin, LOW);
  }

  if (counter == 1) {
    // led turns on
    digitalWrite(led1Pin, HIGH);
  }
  if (counter == 2) {
    // led blinks
    //    digitalWrite(led1Pin, HIGH);
    //    delay(1000);
    //    digitalWrite(led1Pin, LOW);
    //    delay(1000);
    if (millis() - prevMillis >= interval) {
      //do something
      prevMillis = millis();
      Serial.println("Times up");
      if(flipFlop == true){
        digitalWrite(led1Pin, LOW);
      }
      
      if(flipFlop == false){
        digitalWrite(led1Pin, HIGH);
      }

      if(flipFlop == false){
        flipFlop = true;
      }else{
        flipFlop = false;
      }
      
    }
  }

  if (counter >= 3) {
    counter = 0;
  }

}





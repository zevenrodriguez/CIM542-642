void setup() {
    // nothing to do here
 }

 void loop() {
   // get a sensor reading:
   int sensorReading = analogRead(A0);
   // map the results from the sensor reading's range
   // to the desired pitch range:
   float frequency = map(sensorReading, 200, 900, 100, 1000);
   // change the pitch, play for 10 ms:
   tone(8, frequency, 10);
 }

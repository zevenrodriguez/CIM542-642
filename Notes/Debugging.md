# Debugging

Serial - is a library that lets you communicate back and forth from the arduino.

```
  void setup(){
    Serial.begin(9600);
  }

  void loop(){
    Serial.println("Hello World!");
  }

```

## Serial.begin(9600);

Serial.begin(9600) tells the arduino to enable communication between the arduino. The function takes a parameter which is the speed of communication between the computer and the arduino. The speed is measured in bits per second, it is referred as the baud rate.


To send messages back from the arduino to the computer you can use:

* Serial.print();
 * This function allows your to send a message with no added spacing.
* Serial.println();
 * Similar to Serial.print(), but adds a hard return.

 In order to view print messages, click on the serial monitor.

 ![Serial Monitor](https://github.com/zevenrodriguez/CIM542-642/blob/master/files/serialmonitor.PNG)

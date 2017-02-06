###Series and Parallel

![Parallel](https://github.com/zevenrodriguez/CIM542-642/blob/master/Breadboard%20examples/parallel_bb.jpg)

![Serial](https://github.com/zevenrodriguez/CIM542-642/blob/master/Breadboard%20examples/series_bb.jpg)

In a series circuit, the current through each of the components is the same, and the voltage across the circuit is the sum of the voltages across each component. In a parallel circuit, the voltage across each of the components is the same, and the total current is the sum of the currents through each component.

###Variables

Unlike javascript, variable are not dynamic. You have to specify the value type of the variable.

int - Whole number, 16-bit (2-byte), -32,768 to 32,767

long - Whole number, 32 bits (4 bytes),  -2,147,483,648 to 2,147,483,647.

float - Decimal point, 32 bits, 3.4028235E+38 and as low as -3.4028235E+38, 

double - Decimal point, Double precision floating point number. On the Uno and other ATMEGA based boards, this occupies 4 bytes. That is, the double implementation is exactly the same as the float, with no gain in precision.

On the Arduino Due, doubles have 8-byte (64 bit) precision.

byte - 8-bit unsigned number, from 0 to 255

unsigned variables - Adding unsigned infront of the variable name stores only positive values and doubles the storage in the positive direction.

boolean - True or False

char - Single character, it encodes ascii value from -128 to 127.

string vs String

string/String comes in 2 flavors. They both hold a array of characters.

string is in reference to a character array. String is an object. It contains functions that allow for basic String manipulation


###Debugging

Serial - is a library that lets you communicate back and forth from the arduino.

To send messages back from the arduino to the computer you can use:

* Serial.print();
 * This function allows your to send a message with no added spacing.
* Serial.println();
 * Similar to Serial.print(), but adds a hard return.
 
 In order to view print messages, click on the serial monitor.


##Digital Output

###Basic Arduino LED

![Basic Arduino LED](https://github.com/zevenrodriguez/CIM542-642/blob/master/Breadboard%20examples/basicLEDArduino_bb.jpg)


##Digital Input

![Switch Types](http://1.bp.blogspot.com/-KYLSTT7MnNo/VGQganMCoNI/AAAAAAAAIpY/wryTzxRhz9I/s1600/types-of-switches.png)

###Basic Switch

* Push Button Switch
* 10k Resistor (Red-Black-Brown)
* Wires

![Basic Switch](https://github.com/zevenrodriguez/CIM542-642/blob/master/Breadboard%20examples/switch_bb.jpg)


##Homework

Use 2 switches to turn on 2 leds. Think of a use case, ie. game, application, and toy. Use paper, cardboard, and other medium, to create an interface to your use case.


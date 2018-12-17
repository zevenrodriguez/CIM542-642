# Variables

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

## string vs String

string/String comes in 2 flavors. They both hold a array of characters.

string is in reference to a character array. String is an object. It contains functions that allow for basic String manipulation


### Arrays

[Array Types](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/arrayTypes/arrayTypes.ino)

[Reading Multiple Inputs and Output](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/arrayInputOutput/arrayInputOutput.ino)

[LED Sequence using Millis](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/ledSquenceMillis/ledSquenceMillis.ino)

[Sequencing Tones](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/toneSequenceMillis/toneSequenceMillis.ino)

[Sequencing Tones with Pitch File](https://github.com/zevenrodriguez/CIM542-642/tree/master/arduino/toneSequenceMillisWithPitch)

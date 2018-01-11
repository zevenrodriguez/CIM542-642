int num = 500;
long num2 = 1000000;
float decimal = 1.2345;
byte number = 254;
unsigned int num3 = 64;
boolean statment  = true;
char letter = 'A';
//string words = 'hello';
String words2 = "goodbye";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Hello World");
  Serial.print(num);
  Serial.println(num2);
  Serial.println(letter);
  Serial.print("num: ");
  Serial.println(num);
  //Is a comment
  /*

    This is a block comment
   */
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("num: ");
  Serial.println(num);
}

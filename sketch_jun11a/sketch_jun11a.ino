#include <Key.h>
#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
 { '*', '0', '#', 'D' }
};
// byte rowPins[ROWS] = { 17, 19, 21, 23 };
// byte colPins[COLS] = { 25, 27, 29, 31 };
byte rowPins[ROWS] = { 33, 35, 37, 39 };
byte colPins[COLS] = { 41, 43, 45, 47 };
//Create an object of keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
 Serial.begin(115200); //kecepatan transfer data dari Laptop ke MC dan sebaliknya 
 pinMode(34, OUTPUT); //pin 46 ke Buzzer
}
void loop() {
 char keyKelas47 = keypad.getKey();
 if (keyKelas47) {
  Serial.print("Key Pressed : ");
  Serial.println(keyKelas47);
  if (keyKelas47 == '*') {
   digitalWrite(34, 1); //buzzer hidup
  } else
   digitalWrite(34, 0); //buzzer mati
 }
}
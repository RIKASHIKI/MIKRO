void setup() {
  pinMode(33, INPUT_PULLUP);  //3 Use internal pull-up resistor
  pinMode(32, OUTPUT);

  pinMode(35, INPUT_PULLUP);  //6 Use internal pull-up resistor
  pinMode(34, OUTPUT);

pinMode(37, INPUT_PULLUP);  // Use 7 internal pull-up resistor
  pinMode(36, OUTPUT);

 pinMode(39, INPUT_PULLUP);  // Use 5 internal pull-up resistor
  pinMode(38, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // digitalWrite(35, HIGH);
  boolean statusTombol3 = digitalRead(33);
  boolean statusTombol6 = digitalRead(35);
  boolean statusTombol7 = digitalRead(37);
   boolean statusTombol5 = digitalRead(39);
  Serial.println(statusTombol3);

  if (statusTombol3 == 0) {
    digitalWrite(32 , HIGH);
  } else {
    digitalWrite(32, LOW);
  }

 if (statusTombol6 == 0) {
    digitalWrite(34 , HIGH);
  } else {
    digitalWrite(34, LOW);

  }
   if (statusTombol7 == 0) {
    digitalWrite(36 , HIGH);
  } else {
    digitalWrite(36, LOW);
  }

  if (statusTombol5 == 0) {
    digitalWrite(38 , HIGH);
  } else {
    digitalWrite(38, LOW);
  }

}
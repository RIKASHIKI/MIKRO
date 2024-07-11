int BL = LOW;

void setup() {
  // put your setup code here, to run once:
 pinMode(32,OUTPUT);
 pinMode(33,OUTPUT);
 pinMode(35,INPUT);
 Serial.begin(9600);
}


void loop() { // LOW MATI

int BL = digitalRead(35);
Serial.println(BL);
if (BL == LOW) {
  digitalWrite(32,HIGH);//nyala
  digitalWrite(33,LOW);
} else {
  digitalWrite(32,LOW);//mati
  digitalWrite(33,HIGH);
  delay(1000);
} 
}

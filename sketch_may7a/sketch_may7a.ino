void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void angkaNol() {
  //  LOW  LOW LOW LOW LOW LOW HIGH  HIGH  angka 0
  digitalWrite(2, LOW);  //segment A
  digitalWrite(3, LOW);  //segment B
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);  //segment G
  digitalWrite(9, HIGH);  //segment H/dot/titik
}

void angkaSatu() {
  //  HIGH  LOW LOW HIGH  HIGH  HIGH  HIGH  HIGH  1
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}
void angkaDua() {
  //LOW   LOW   HIGH  LOW   LOW   HIGH  LOW   HIGH    2
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void angkaTiga() {
  //LOW   LOW   LOW   LOW   HIGH  HIGH  LOW   HIGH    3
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void angkaEmpat() {
  //HIGH  LOW   LOW   HIGH  HIGH  LOW   LOW   HIGH    4
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void angkaLima() {
  //LOW   HIGH  LOW   LOW   HIGH  LOW   LOW   HIGH    5
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void angkaEnam() {
  //LOW   HIGH  LOW   LOW   LOW   LOW   LOW   HIGH    6
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void angkaTujuh() {
  //LOW   LOW   LOW   HIGH  HIGH  HIGH  HIGH  HIGH    7
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}
void angkaDelapan() {
  //LOW   LOW   LOW   LOW   LOW   LOW   LOW   HIGH    8
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void angkaSembilan() {
  //LOW   LOW   LOW   LOW   HIGH  LOW   LOW   HIGH    9
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}

void lampumati(){
  digitalWrite(10, 1);  //digit selection - digit 1 OFF
  digitalWrite(11, 1);  //digit selection - digit 2 OFF
  digitalWrite(12, 1);  //digit selection - digit 3 OFF
  digitalWrite(13, 1);  //digit selection - digit 4 OFF
}
void lampuseg1(){
  digitalWrite(10, 0);  //digit selection - digit 1 ON
  digitalWrite(11, 1);  //digit selection - digit 2 OFF
  digitalWrite(12, 1);  //digit selection - digit 3 OFF
  digitalWrite(13, 1);  //digit selection - digit 4 OFF
}
void lampuseg2(){
  digitalWrite(10, 1);  //digit selection - digit 1 OFF
  digitalWrite(11, 0);  //digit selection - digit 2 ON
  digitalWrite(12, 1);  //digit selection - digit 3 OFF
  digitalWrite(13, 1);  //digit selection - digit 4 OFF
}
void lampuseg3(){
  digitalWrite(10, 1);  //digit selection - digit 1 OFF
  digitalWrite(11, 1);  //digit selection - digit 2 ON
  digitalWrite(12, 0);  //digit selection - digit 3 OFF
  digitalWrite(13, 1);  //digit selection - digit 4 OFF
}
void lampuseg4(){
  digitalWrite(10, 1);  //digit selection - digit 1 OFF
  digitalWrite(11, 1);  //digit selection - digit 2 ON
  digitalWrite(12, 1);  //digit selection - digit 3 OFF
  digitalWrite(13, 0);  //digit selection - digit 4 OFF
}

void loop() {
  // int t = 1000; //delay 1000mS atau 1 detik
  // int t = 500; //delay 500mS atau 1/2 detik
  // int t = 100; //delay 100mS atau 1/10 detik
  // int t = 50; //delay 50mS atau 1/20 detik
  // int t = 10; //delay 10mS atau 1/100 detik
  int t = 500; //delay 10mS atau 1/200 detik
    
  lampuseg1();
  angkaNol();
  delay(t);
  lampuseg2();
  angkaNol(); //memanggil prosedur/void angka Tujuh

  delay(t); //delay 1 detik
  //============================
  lampumati();
  lampuseg3();
  angkaNol(); //memanggil prosedur/void angka Nol
  delay(t); //delay 1 detik
  //============================
  lampumati();
  lampuseg4();
  angkaNol(); //memanggil prosedur/void angka Empat
  delay(t); //delay 1 detik
}
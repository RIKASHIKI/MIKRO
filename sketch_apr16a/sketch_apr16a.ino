void setup() {
  pinMode(2, OUTPUT);   pinMode(3, OUTPUT);   pinMode(4, OUTPUT);   pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);   pinMode(7, OUTPUT);   pinMode(8, OUTPUT);   pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);  pinMode(11, OUTPUT);  pinMode(12, OUTPUT);  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(10, 1);  //digit selection - digit 1 ON
  digitalWrite(11, 1); //digit selection - digit 2 OFF
  digitalWrite(12, 1); //digit selection - digit 3 OFF
  digitalWrite(13, 0); //digit selection - digit 4 OFF

  int t=100;
  angkaNol(); delay(t);
  angkaSatu();delay(t);

}
void angkaNol(){
//  LOW  LOW LOW LOW LOW LOW HIGH  HIGH  angka 0
  digitalWrite(2, LOW);   digitalWrite(3, LOW);   digitalWrite(4, LOW);   digitalWrite(5, LOW);    
  digitalWrite(6, LOW);   digitalWrite(7, LOW);   digitalWrite(8, HIGH);  digitalWrite(9, HIGH);
}
void angkaSatu() {
//  HIGH  LOW LOW HIGH  HIGH  HIGH  HIGH  HIGH  1
  digitalWrite(2, HIGH);   digitalWrite(3, LOW);   digitalWrite(4, LOW);   
  digitalWrite(5, HIGH);   digitalWrite(6, HIGH);   digitalWrite(7, HIGH);   
  digitalWrite(8, HIGH);   digitalWrite(9, HIGH);
}
void angkaDua() {
  //LOW   LOW   HIGH  LOW   LOW   HIGH  LOW   HIGH    2
  digitalWrite(2, LOW);   digitalWrite(3, LOW);   digitalWrite(4, HIGH);   
  digitalWrite(5, LOW);   digitalWrite(6, LOW);  digitalWrite(7, HIGH);  
  digitalWrite(8, LOW);  digitalWrite(9, HIGH);
}
void angkaTiga() {
  //LOW   LOW   LOW   LOW   HIGH  HIGH  LOW   HIGH    3
  digitalWrite(2, LOW);  digitalWrite(3, LOW);   digitalWrite(4, LOW);   
 digitalWrite(5, LOW);   digitalWrite(6, HIGH); digitalWrite(7, HIGH);  
 digitalWrite(8, LOW);  digitalWrite(9, HIGH);
}
void angkaEmpat() {
  //HIGH  LOW   LOW   HIGH  HIGH  LOW   LOW   HIGH    4
  digitalWrite(2, HIGH );  digitalWrite(3, LOW);   digitalWrite(4, LOW);   
  digitalWrite(5, HIGH );  digitalWrite(6, HIGH); digitalWrite(7, LOW);  
  digitalWrite(8, LOW);  digitalWrite(9, HIGH);
}
void angkaLima() {
  //LOW   HIGH  LOW   LOW   HIGH  LOW   LOW   HIGH    5
  digitalWrite(2, LOW );  digitalWrite(3, HIGH );   digitalWrite(4, LOW);   
  digitalWrite(5, LOW);   digitalWrite(6, HIGH); digitalWrite(7, LOW);  
  digitalWrite(8, LOW);  digitalWrite(9, HIGH);
}
void angkaEnam() {
  //LOW   HIGH  LOW   LOW   LOW   LOW   LOW   HIGH    6
  digitalWrite(2, LOW );  digitalWrite(3, HIGH );   digitalWrite(4, LOW);   
  digitalWrite(5, LOW);   digitalWrite(6, LOW); digitalWrite(7, LOW);  
  digitalWrite(8, LOW);  digitalWrite(9, HIGH);
}
void angkaTujuh() {
  //LOW   LOW   LOW   HIGH  HIGH  HIGH  HIGH  HIGH    7
  digitalWrite(2, LOW );  digitalWrite(3, LOW  );   digitalWrite(4, LOW);   
  digitalWrite(5, HIGH);  digitalWrite(6, HIGH); digitalWrite(7, HIGH);  
  digitalWrite(8, HIGH);  digitalWrite(9, HIGH);
}
void angkaDelapan() {
  //LOW   LOW   LOW   LOW   LOW   LOW   LOW   HIGH    8
  digitalWrite(2, LOW );  digitalWrite(3, LOW  );   digitalWrite(4, LOW);    
  digitalWrite(5, LOW);   digitalWrite(6, LOW); digitalWrite(7, LOW);  
  digitalWrite(8, LOW);  digitalWrite(9, HIGH);
}

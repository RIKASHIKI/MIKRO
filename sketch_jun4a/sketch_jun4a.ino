//kuliah Mikrokontroler kelas 46-47 Banjarbaru
//6 Juni 2024
//Arduino Mega Pro Mini 2560 + Keypad 16 button + LCD
//
#include <LiquidCrystal.h>

// LCD pins | Ard MegaPro Mini  | CN3
// rs       | 2                 | 1
// enable   | 3                 | 2
// d4       | 4                 | 3
// d5       | 5                 | 4
// d6       | 6                 | 5
// d7       | 7                 | 6

//                              | CN12
//          | 8                 | 1 

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  // Clears the LCD screen
  lcd.clear();
  pinMode(8,INPUT);
}

void loop() {
  boolean dataTombol;
  dataTombol = digitalRead(8);
  lcd.setCursor(0, 0);  //kolom ke 0 (paling kiri, dan baris atas)
  lcd.print("Prog Baca Tombol");
  lcd.setCursor(0, 1);
  lcd.print("Data terbaca=");
  lcd.setCursor(15, 1);
  lcd.print(dataTombol);
  delay(500); //menunda tampilan setengah detik agar bisa terlihat di LCD
  lcd.setCursor(15, 1); //di posisi paling kanan baris kedua tampilan dikosongkan
  lcd.print(" ");    
}
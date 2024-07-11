#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//#include <LiquidCrystal.h>

LiquidCrystal lcd(0x27,16,2);
//LiquidCrystal lcd(12,11,5,4,3,2); 
//int count = 0;


void setup() {

}

void loop() {
  // Tampilkan status tombol di baris pertama
  //lcd.setCursor(0, 0);
  //lcd.print("cl");


  //boolean tombol;
  //tombol = digitalRead(8); // Membaca input dari tombol

  // Jika tombol ditekan, tambahkan 1 ke nilai count
  //if(tombol == HIGH) {
    //count++;
    //delay(200); // Delay untuk menghindari multiple clicks yang tidak diinginkan
  //}

  // Tampilkan jumlah klik di baris pertama
  //lcd.setCursor(0, 0);
  //lcd.print("click = ");
  //lcd.print(count);

  delay(100); // Delay untuk stabilitas tampilan



  // Pesan yang akan ditampilkan
  String message = "Running text on LCD using Arduino";
  
  // Panjang pesan
  int msgLength = message.length();
  
  // Panjang maksimal LCD (16 karakter)
  int lcdWidth = 16;

  // Geser teks dari kanan ke kiri
  for (int i = 0; i < msgLength + lcdWidth; i++) {
    lcd.setCursor(0, 1); // Tampilkan teks di baris kedua
    lcd.clear();
    
    // Tentukan posisi awal teks
    int pos = i - lcdWidth;
    
    //Jika posisi awal lebih kecil dari nol, mulai dari kolom nol
    if (pos < 0) {
      pos = 0;
   }

    // Tampilkan bagian dari pesan pada LCD
    lcd.print(message.substring(pos, pos + lcdWidth));
    
    delay(400);
  }


}

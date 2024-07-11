// Definisikan pin potensiometer
const int potPin = A0;

void setup() {
  // Mulai komunikasi serial dengan kecepatan 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Baca nilai analog dari potensiometer
  int sensorValue = analogRead(potPin);

  // Kirim nilai yang dibaca ke Serial Monitor
  Serial.print("Nilai potensiometer: ");
  Serial.println(sensorValue);

  // Tunda sebentar sebelum membaca nilai lagi
  delay(1000);
}
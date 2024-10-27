void setup() {
  // Setup untuk pin LED
  pinMode(8, OUTPUT); // RED
  pinMode(10, OUTPUT); // YELLOW
  pinMode(12, OUTPUT); // GREEN
}

void loop() {
  // Nyalakan lampu merah selama 3 detik
  digitalWrite(8, HIGH); // Hidupkan merah
  delay(3000);
  digitalWrite(8, LOW);  // Matikan merah

  // Nyalakan lampu kuning selama 1 detik
  digitalWrite(10, HIGH); // Hidupkan kuning
  delay(1000);
  digitalWrite(10, LOW);  // Matikan kuning

  // Nyalakan lampu hijau selama 3 detik
  digitalWrite(12, HIGH); // Hidupkan hijau
  delay(3000);
  digitalWrite(12, LOW);  // Matikan hijau

  // Lampu hijau berkedip sebanyak 3 kali
  for (int i = 0; i < 3; i++) {
    digitalWrite(12, HIGH); // Hidupkan hijau
    delay(500);
    digitalWrite(12, LOW);  // Matikan hijau
    delay(500);
  }
}



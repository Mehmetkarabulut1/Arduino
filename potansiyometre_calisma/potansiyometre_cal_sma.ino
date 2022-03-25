const byte potpin = A0;
int gelenveri = 2;

void loop() {
  gelenveri = digitalRead(potpin);
  Serial.println(gelenveri);
  delay(100);
}

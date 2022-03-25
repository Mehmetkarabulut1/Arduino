const byte potpin = A0;
void setup() {
Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
  Serial.println("deger;  ");
//gelenveri = digitalRead(potpin);
  Serial.println(analogRead(A0));
  delay(500);
}  

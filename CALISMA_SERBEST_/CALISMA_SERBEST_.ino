int buton=5;
int led=2;
int buzzer=3;
int durum;
void setup() {
pinMode(led, OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(buton ,INPUT);
Serial.begin(9600);
}

void loop() {
  durum=digitalRead(buton);
  if (durum = HIGH)
  {
  digitalWrite(led ,HIGH);
  delay(250);
  digitalWrite(led ,LOW);
  delay(250);
  Serial.println("led yanıyor");
  }
  else if (durum = LOW)
  {
  digitalWrite(buzzer, HIGH);
  Serial.println("buzzer calısıyor");
}
}

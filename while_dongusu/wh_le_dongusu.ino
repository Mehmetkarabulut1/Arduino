int a=0;
int buton = 2;
int led= 3;
int butondurumu;
void setup()//whıle dongusu kosulsart
{
Serial.begin(9600);
pinMode(buton , INPUT);
pinMode(led , OUTPUT);

}

void loop() {
while (butondurumu == HIGH)
{
  Serial.println("butona basiliyor");
  digitalWrite(led , HIGH);
  delay(250);
  digitalWrite(led , LOW);
  delay(250);
butondurumu = digitalRead(buton);

}
Serial.println("butona basılmıyor");
}

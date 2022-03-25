const int kirmizi =1;
const int mavi =2;
const int yesil=3;
const int potpin= A0;
float deger;
void setup() {
pinMode(kirmizi ,OUTPUT);
pinMode(mavi,OUTPUT);
pinMode(yesil,OUTPUT);
pinMode(A0 ,OUTPUT);
Serial.begin(9600);
}

void loop() {
deger=analogRead(A0);
if (deger>=0 && deger<=99)
  {
digitalWrite(kirmizi , LOW);
digitalWrite(mavi , LOW);
digitalWrite(yesil , LOW);
  }


 else if(deger>=100 && deger<340)
{
digitalWrite(kirmizi , LOW);
digitalWrite(mavi , HIGH);
digitalWrite(yesil , LOW);
}
else if (deger>=340 && deger<=700)
{
digitalWrite(kirmizi , HIGH);
digitalWrite(mavi , HIGH);
digitalWrite(yesil , LOW);
}
else if (deger >=701)
{
digitalWrite(kirmizi , HIGH);
digitalWrite(mavi , HIGH);
digitalWrite(yesil , HIGH);
}
delay(100);
Serial.println(deger);
}

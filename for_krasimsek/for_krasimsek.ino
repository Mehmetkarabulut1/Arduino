void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
for(int b=2; b<8; b++)
{
digitalWrite(b, HIGH);
delay(50);
}
//for(int b =8; b>=2; b--)
{
  //digitalWrite(b, LOW);
// delay(50);
  }
}

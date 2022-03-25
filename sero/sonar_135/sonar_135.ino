#include<Servo.h>
Servo sg90;
const byte buton=1; 
const byte buzzer=2;
const byte echo =3;
const byte trig=4;
const byte led1 =5;
const byte led2=6;
const byte led3=7;
const byte led4=8;
const byte led5=9;
const byte pot=A0;

int pot_deger =0;
int pot_ilk=0;
int sure=0;
int mesafe=0;
int alarm_mesafesi=0;
int pos=0;
void setup() {
 sg90.attach(10);
 sg90.attach(90);
pinMode(buton ,INPUT);
pinMode(buzzer ,OUTPUT);
pinMode(led1 ,OUTPUT);
pinMode(led2 ,OUTPUT);
pinMode(led3 ,OUTPUT);
pinMode(led4 ,OUTPUT);
pinMode(led5 ,OUTPUT);
pinMode(echo ,OUTPUT);
pinMode(trig ,OUTPUT);
Serial.begin(9600);

pot_ilk=analogRead(pot);
while(1){
  for(int i=5; i<9; i++)
  {
  digitalWrite(i ,1);
  delay(50);
  digitalWrite(i,0);
  }
  pot_deger=analogRead(pot);
  if (pot_ilk+10>pot_deger || pot_ilk<pot_deger-10);{
    break;
  }
  
}
while(1)
{
  pot_deger=analogRead(pot);
  pot_deger=map(pot_deger , 0 , 1023 ,1,5);
  
if(pot_deger==1)
{
 alarm_mesafesi=10;
  digitalWrite(led1 ,1); 
  digitalWrite(led1 ,0); 
  digitalWrite(led1 ,0); 
  digitalWrite(led1 ,0); 
  digitalWrite(led1 ,0); 
}
else if (pot_deger=20)
{
  alarm_mesafesi=20;
 digitalWrite(led1 ,1);
  digitalWrite(led2 ,1); 
   digitalWrite(led3 ,0); 
    digitalWrite(led4 ,0); 
     digitalWrite(led5 ,0); 
}
else if(pot_deger=3)
{
  alarm_mesafesi=30;
 digitalWrite(led1 ,1); 
 digitalWrite(led2 ,1); 
 digitalWrite(led3 ,1); 
  digitalWrite(led4 ,0);
   digitalWrite(led5 ,0);
}
else if(pot_deger=4)
{
  alarm_mesafesi=40;
 digitalWrite(led1 ,1); 
 digitalWrite(led2 ,1); 
 digitalWrite(led3 ,1); 
  digitalWrite(led4 ,1);
   digitalWrite(led5 ,0);
}

else if(pot_deger=5)
{
  alarm_mesafesi=50;
 digitalWrite(led1 ,1); 
 digitalWrite(led2 ,1); 
 digitalWrite(led3 ,1); 
  digitalWrite(led4 ,1);
   digitalWrite(led5 ,1);
}
if (digitalRead(buton) == 1)
     break;
} 
}

void loop() {  
for(pos =0; pos<=180; pos++);
{
  sg90.write(pos);
  delay(15);
  mesafe=mesafe_olc();
  if(mesafe<=alarm_mesafesi)
  {
    digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3, 1);
    digitalWrite(led4,1);
    digitalWrite(led5,1);
    digitalWrite(buzzer, 1);
  }
}
for(pos=180;pos>=0;pos--)
{
  sg90.write(pos);
  delay(15);
mesafe=mesafe_olc();
}
}
int mesafe_olc()

{
 digitalWrite(trig ,HIGH);
 delay(1);
 digitalWrite(trig, LOW);
 sure = pulseIn(echo , HIGH);
 mesafe=(sure/2)/28.5;
 return mesafe ;
}


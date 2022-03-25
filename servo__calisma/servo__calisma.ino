#include<Servo.h>
Servo sg90;
int pos=0;
int pozisyon=0;
int trigger_pin=6;
int echo_pin= 8;
int buzzer=7;
int mesafe;
int sure;
void setup() {
sg90.attach(9);
pinMode(buzzer , OUTPUT);
pinMode(trigger_pin , OUTPUT);
pinMode(echo_pin , INPUT);
Serial.begin(9600);
}

void loop() { 
  for (pos=0; pos<=180; pos+=1)
{
sg90.write(pos);
 delay(5);
}
//for(pos = 180; pos>=0; pos-=1)
{
  //sg90.write(pos);
  //delay(15);      
}

digitalWrite(trigger_pin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigger_pin, LOW);
sure = pulseIn(echo_pin, HIGH);
mesafe = (sure/2) / 28.5;
Serial.println(mesafe);
if (mesafe<= 30){
digitalWrite(buzzer ,HIGH);
delay(200);
digitalWrite(buzzer ,LOW);
}


}


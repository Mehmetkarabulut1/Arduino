const int trigger_pin =13;
const int echo_pin =12;
const int buzzer = 2;
const int mled =3;
const int yled = 4;
const int sled =5;
const int kled =6;
int sure;
int mesafe;

void setup() {
  pinMode(mled , OUTPUT);
  pinMode(yled , OUTPUT);
  pinMode(sled , OUTPUT);
  pinMode(kled , OUTPUT);
  pinMode(buzzer , OUTPUT);
  pinMode(trigger_pin , OUTPUT);
  pinMode(echo_pin , INPUT);
  Serial.begin(9600);

}

void loop() {
digitalWrite(trigger_pin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigger_pin, LOW);
sure = pulseIn(echo_pin, HIGH);
mesafe = (sure/2) / 28.5;
Serial.println(mesafe);

if (mesafe <=10){
 digitalWrite(kled , HIGH);
digitalWrite(buzzer , HIGH);
delay(250);
digitalWrite(kled , LOW);
digitalWrite(buzzer , LOW);
delay(250);
}
else if (mesafe <=30){
digitalWrite(sled , HIGH);
digitalWrite(buzzer , HIGH);
delay(500);
digitalWrite(sled , LOW);
digitalWrite(buzzer , LOW);
delay(500);
}
else if (mesafe <=50){
digitalWrite(yled , HIGH);
digitalWrite(buzzer , HIGH);
delay(750);
digitalWrite(yled , LOW);
digitalWrite(buzzer , LOW);
delay(750);}
else {
digitalWrite(mled , HIGH);
digitalWrite(kled , LOW);
delay(750);
digitalWrite(mled ,LOW);}
}

int led1=2;
int led2=3;

void setup() {
  pinMode(led2,OUTPUT);
  pinMode(led1,OUTPUT);
}

void loop() {
 digitalWrite(led1 ,HIGH);
 delay(75);
 digitalWrite(led1,LOW);
 delay(75); digitalWrite(led1 ,HIGH);
 delay(75);
 digitalWrite(led1,LOW);
 delay(75);
 digitalWrite(led1 ,HIGH);
 delay(75);
 digitalWrite(led1,LOW);
 delay(75);
 digitalWrite(led2 ,HIGH);
 delay(75);
 digitalWrite(led2,LOW);
 delay(75);
  digitalWrite(led2 ,HIGH);
 delay(75);
 digitalWrite(led2,LOW);
 delay(75);
  digitalWrite(led2 ,HIGH);
 delay(75);
 digitalWrite(led2,LOW);
 delay(75);}


int led1 = 1;
int buton = 2; 
int butondurum;
void setup() {
pinMode(led1 , OUTPUT);
pinMode(buton , INPUT);}
void loop() {
butondurum =  digitalRead(buton);
if(butondurum , HIGH)
digitalWrite(led1 , HIGH);
else
digitalWrite(led1 , LOW);}

int buton=7;
int butondurum;
int led=1;
void setup() {
pinMode(buton , INPUT);
Serial.begin(9600);
}

void loop() {
butondurum=digitalRead(buton);
if (butondurum == HIGH){
digitalWrite(led ,HIGH);
Serial.println("butona basiliyor");
}
else if(butondurum == LOW){
digitalWrite(led ,LOW);
Serial.println("butona basilmiyor");
}
else
digitalWrite(led,LOW);
}

int sayici=0;
void setup() {
  
Serial.begin(9600);
}

void loop() {
sayici ++;
Serial.println(sayici);
Serial.println("gerizekali fatmanur");
delay(300);
}

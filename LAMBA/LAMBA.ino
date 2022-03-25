int kirmizi=4;
int sari=2;
int yesil=3;
void setup() {
pinMode(kirmizi , OUTPUT);
pinMode(sari , OUTPUT);
pinMode(yesil , OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(kirmizi , HIGH);
delay(1000);
digitalWrite(kirmizi , LOW);
Serial.println("gec"); 

digitalWrite(sari , HIGH);
delay(1000);
digitalWrite(sari , LOW);
digitalWrite(yesil , HIGH);
delay(1000);
digitalWrite(yesil , LOW);
digitalWrite(sari , HIGH);
delay(1000);
digitalWrite(sari , LOW);
delay(1000);
digitalWrite(sari , HIGH);
delay(1000);
digitalWrite(sari , LOW);
delay(1000);
digitalWrite(sari , HIGH);
delay(1000);
digitalWrite(sari , LOW);
Serial.println("dur");
}

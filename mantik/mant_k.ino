int a= 2;
int b = 2;
int c= 3;
int d=4;
int sonuc;
void setup() {
  Serial.begin(9600);

}

void loop() {
  if ( ( a == b )&&(c<d))
  sonuc= 1;
else if ((a==b)&&(c==d))
sonuc=2;
Serial.println(sonuc);

}


void setup() {
Serial.begin(38400);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);

}

void loop() {
char gelenVeri;
if(Serial.available()>0){
  gelenVeri = Serial.read();
  Serial.println(gelenVeri);
  if(gelenVeri == 'a')
  {
    Serial.println(gelenVeri);
    digitalWrite(4, HIGH);
    delay(1000);
  }
  if(gelenVeri == 'b')
  {
   Serial.println(gelenVeri);
   digitalWrite(4, LOW);
   delay(1000);
  }
    if(gelenVeri == 'c')
  {
    Serial.println(gelenVeri);
    digitalWrite(5, HIGH);
    delay(1000);
  }
  if(gelenVeri == 'd')
  {
   Serial.println(gelenVeri);
   digitalWrite(5, LOW);
   delay(1000);
  }
    if(gelenVeri == 'e')
  {
    Serial.println(gelenVeri);
    digitalWrite(6, HIGH);
    delay(1000);
  }
  if(gelenVeri == 'f')
  {
   Serial.println(gelenVeri);
   digitalWrite(6, LOW);
   delay(1000);
  }
}

}

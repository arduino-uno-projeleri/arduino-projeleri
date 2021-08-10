bool hareket = false;
int hareketSensoruPin = 7;
void setup() {
pinMode(4, OUTPUT);
}

void loop() {
hareket = digitalRead(hareketSensoruPin); //sensörden okuma yapıyoruz
if(hareket == HIGH) //eğer hareket algılandıysa
{
  digitalWrite(4, HIGH);// 4 numaralı pine güç ver
}
else{ //değilse
  digitalWrite(4, LOW); //söndür
}
}

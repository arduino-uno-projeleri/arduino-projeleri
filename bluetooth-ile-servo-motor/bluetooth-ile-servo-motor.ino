#include <Servo.h>
Servo servo;
void setup() {
Serial.begin(38400);
servo.attach(6);
}

void loop() {
char gelenVeri;
if(Serial.available()>0){
  gelenVeri = Serial.read();
  Serial.println(gelenVeri);
  if(gelenVeri == 'a')
  {
    Serial.println(gelenVeri);
    servo.write(90);
    delay(1000);
  }
  if(gelenVeri == 'b')
  {
    Serial.println(gelenVeri);
   servo.write(0);
   delay(1000);
  }
}

}

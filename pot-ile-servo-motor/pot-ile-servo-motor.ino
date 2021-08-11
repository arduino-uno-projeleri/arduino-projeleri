#include <Servo.h>
int pot;
Servo servom;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servom.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
pot = analogRead(A0);
int deger=map(pot , 0,1023,0,180);
servom.write(deger);
Serial.println(deger);
}

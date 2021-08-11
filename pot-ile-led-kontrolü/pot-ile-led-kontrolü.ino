int pot;
void setup() {
  pinMode(6, OUTPUT);
}

void loop() {
pot = analogRead(A0);
pot = map(pot,0,1023,0,255);
analogWrite(6,pot);
delay(100);

}

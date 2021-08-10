int y;
void setup() 
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() 
{
y = analogRead(A0);
Serial.println(y);
if(y < 500){
Serial.println(y);
digitalWrite(8, HIGH);
delay(10);
digitalWrite(8, LOW);

digitalWrite(9, HIGH);
delay(10);
digitalWrite(9, LOW);

digitalWrite(10, HIGH);
delay(10);
digitalWrite(10, LOW);

digitalWrite(11, HIGH);
delay(10);
digitalWrite(11, LOW);
  }
  if(y > 500 && y < 510)
  {
digitalWrite(11, LOW);
delay(10);
digitalWrite(11, LOW);

digitalWrite(10, LOW);
delay(10);
digitalWrite(10, LOW);

digitalWrite(9, LOW);
delay(10);
digitalWrite(9, LOW);

digitalWrite(8, LOW);
delay(10);
digitalWrite(8, LOW);  
  }
  if(y > 510){
Serial.println(y);
digitalWrite(11, HIGH);
delay(10);
digitalWrite(11, LOW);

digitalWrite(10, HIGH);
delay(10);
digitalWrite(10, LOW);

digitalWrite(9, HIGH);
delay(10);
digitalWrite(9, LOW);

digitalWrite(8, HIGH);
delay(10);
digitalWrite(8, LOW); 
  }
}

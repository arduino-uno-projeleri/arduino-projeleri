int role = 7;


void setup() {
pinMode(role,OUTPUT);
}

void loop() {
digitalWrite(role,HIGH);
delay(1000);
digitalWrite(role,LOW);
delay(1000);   
}

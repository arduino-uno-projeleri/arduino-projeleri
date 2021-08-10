int kirmizi = 2;
int yesil = 3;
int mavi = 4;
int x;
int y;
void setup() 
{
pinMode(kirmizi, OUTPUT);
pinMode(yesil, OUTPUT);
pinMode(mavi, OUTPUT);
Serial.begin(9600);
}

void loop() 
{
x = analogRead(A0);
y = analogRead(A1);
analogWrite(2,x);
analogWrite(3,y);
analogWrite(4,x*2-y);
delay(200);
}

#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
LiquidCrystal_I2C lcd(0x27 , 16 , 2);
DHT dht(DHTPIN, DHTTYPE);

byte customChar[8] = {
0b00110,
0b01001,
0b01001,
0b00110,
0b00000,
0b00000,
0b00000,
0b00000
};

void setup() {
  lcd.begin();
  dht.begin();

}

void loop() {

  int temp = dht.readTemperature();
  int hum = dht.readHumidity();
  lcd.clear();
  lcd.setCursor(2 , 0);
  lcd.print("@Arduino Uno");
  lcd.setCursor(3 , 1);
  lcd.print("Projeleri");
  for(int i = 0; i<= 40; i++){
  lcd.scrollDisplayLeft();
  delay(25);
  }
  delay(2500);
  lcd.clear();
  lcd.createChar(0, customChar);
  lcd.setCursor(0,0);
  lcd.print("Sicaklik: ");
  lcd.print(temp);
  lcd.write((uint8_t)0);
  lcd.print("C");

  lcd.setCursor(3,1);
  lcd.print("Nem: ");
  lcd.print(hum);
  lcd.print(" %");

  delay(3500);

 

 

}

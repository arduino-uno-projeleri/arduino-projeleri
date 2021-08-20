#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int dk = 00;
int sn = 00;
int ms = 00;
bool basla = false;
bool tur = false;
void setup() {
  lcd.begin();
  pinMode(6, INPUT);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  int buton1 = digitalRead(6);
  int buton2 = digitalRead(7);
  guncelle();
  if(buton1 == 1){
    basla = !basla;
    tur = !tur;
  }
  if(basla){
    ms+=1;
  }
  if(ms >= 100){
    sn+=1;
    ms = 0;
  }
  if(sn == 60){
    dk+=1;
    sn = 0;
  }

  if(buton2 == 1 && tur){
    lcd.setCursor(0,1);
    lcd.print(String(dk)+":"+String(sn)+":"+String(ms));
    lcd.setCursor(0,0);
  }
  if(buton2 == 1 && !tur){  
    dk = 00;
    sn = 00;
    ms = 00;
    lcd.clear();
  }
  delay(1);
}
void guncelle(){
  lcd.print(String(dk)+":"+String(sn)+":"+String(ms));
}

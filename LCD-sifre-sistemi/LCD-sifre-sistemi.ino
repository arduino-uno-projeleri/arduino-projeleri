#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27 , 16 , 2);
const byte ROWS = 4; 
const byte COLS = 4; 
String sifre;
String dogru = "1234";
char hexaKeys[ROWS][COLS] = 
{
  {'1','2','3','A'}  
  ,
  {'4','5','6','B'}
  ,
  {'7','8','9','C'} 
  ,
  {'*','0','#','D'}
};
byte rowPins[ROWS] = { 13, 12, 11, 10}; 
byte colPins[COLS] = { 9, 8, 7, 6}; 

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup() {
  Serial.begin(9600);
  
  lcd.begin();
  lcd.setCursor(0,0);
  lcd.print("Sifreyi girin:");
  lcd.setCursor(0,1);
}

void loop() {
  char customKey = customKeypad.getKey();
  if(customKey)
  {
    if(customKey != '#'){
      if(customKey != '*'){
      lcd.print(customKey);
      sifre = sifre + customKey;
      }
      else{
        lcd.clear();
        lcd.print("Eski sifre:");
        lcd.setCursor(0,1);
        do{
          Serial.println(customKey);
        customKey = customKeypad.getKey();
        if(customKey)
        {
          lcd.print(customKey);
          if(customKey == '#'){
            if(sifre == dogru){
              lcd.clear();
              sifre = "";
              lcd.print("Yeni sifre:");
              lcd.setCursor(0,1);
              customKey = ' ';
              do{
              customKey = customKeypad.getKey();//get the key value
              if(customKey)
              {
                if(customKey != '#'){
                  sifre = sifre + customKey;
                  lcd.print(customKey);
                }
                else{
                  lcd.clear();
                  delay(1);
                  lcd.setCursor(2,0);
                  lcd.print("Yeni sifre");
                  lcd.setCursor(2,1);
                  lcd.print("kaydedildi");
                  dogru = sifre;
                  sifre = "";
                  delay(3000);
                  lcd.clear();
                  lcd.print("Sifreyi girin:");
                  lcd.setCursor(0,1);
                }
              }
              }while(customKey != '#');
            }
            else{
              lcd.clear();
              lcd.print("Eski sifreniz");
              lcd.setCursor(0,1);
              lcd.print("yanlis!");
              delay(3000);
              sifre = "";
              lcd.clear();
              lcd.print("Sifreyi girin:");
              lcd.setCursor(0,1);
            }
          }
          else{
            sifre = sifre + customKey;
          }
        }
        }while(customKey != '#');
        }
    }
    else{
      lcd.clear();
      lcd.print("Bekleniyor...");
      delay(2000);
      lcd.clear();
      if(sifre == dogru){
        lcd.print("Hosgeldiniz");
        delay(2000);
        lcd.clear();
        sifre = "";
        lcd.print("Sifreyi girin:");
        lcd.setCursor(0,1);
      }
      else{
        lcd.print("Yanlis Sifre!");
        delay(2000);
        lcd.clear();
        sifre = "";
        lcd.print("Sifreyi girin:");
        lcd.setCursor(0,1);
      }
    }
  }
}

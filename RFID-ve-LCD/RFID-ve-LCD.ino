#include <SPI.h>                          
#include <MFRC522.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>  


int RST_PIN = 9;                          
int SS_PIN = 10;                         
                            
LiquidCrystal_I2C lcd(0x27,16,2);              
MFRC522 rfid(SS_PIN, RST_PIN);            
byte ID[4] = {192, 124, 51, 37};   

void setup() {                  
  Serial.begin(9600);                     
  lcd.begin();
  lcd.setCursor(0,0);
  SPI.begin();                            
  rfid.PCD_Init();                        
}
 
void loop() {

  if ( ! rfid.PICC_IsNewCardPresent())    
    lcd.clear();
    lcd.print("Karti okutun:");

  if ( ! rfid.PICC_ReadCardSerial())      
    lcd.clear();
    lcd.print("Karti okutun:");
    
  if (rfid.uid.uidByte[0] == ID[0] &&     
    rfid.uid.uidByte[1] == ID[1] && 
    rfid.uid.uidByte[2] == ID[2] && 
    rfid.uid.uidByte[3] == ID[3] ) {
        Serial.println("Kapi acildi");
        lcd.clear();
        lcd.print("Giris yapildi!");
        lcd.setCursor(0,1);
        lcd.print(rfid.uid.uidByte[0]);
        lcd.print(rfid.uid.uidByte[1]);
        lcd.print(rfid.uid.uidByte[2]);
        lcd.print(rfid.uid.uidByte[3]);
        delay(5000);
        lcd.clear();            
        rfid.uid.uidByte[0] = 0;
        rfid.uid.uidByte[1] = 0;
        rfid.uid.uidByte[2] = 0;
        rfid.uid.uidByte[3] = 0;
    }
    else if(rfid.uid.uidByte[0] != 0){                                 
      lcd.clear();
      lcd.print("Gecersiz Kart!");
      delay(3000);
      lcd.clear();
      rfid.uid.uidByte[0] = 0;
        rfid.uid.uidByte[1] = 0;
        rfid.uid.uidByte[2] = 0;
        rfid.uid.uidByte[3] = 0;
        
    }
  rfid.PICC_HaltA();
}

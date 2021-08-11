const int LED1 = 4; 
const int LED2 = 5;  
const int LED3 = 6;   
const int LED4 = 7;  

// üst kısımdaki pinler

const int LED5 = 8; 
const int LED6 = 9;   
const int LED7 = 10;  
const int LED8 = 11; 
int buton1 = 0;
int buton2 = 0;
int sayi=0;
void setup() {
   pinMode(LED1, OUTPUT);   
  pinMode(LED2, OUTPUT); 
  pinMode(LED3, OUTPUT); 
  pinMode(LED4, OUTPUT);   
  pinMode(LED5, OUTPUT);   
  pinMode(LED6, OUTPUT);   
  pinMode(LED7, OUTPUT);   
  pinMode(LED8, OUTPUT);   
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
}

void loop() {
  buton1 = digitalRead(13);
  buton2 = digitalRead(12);
  Serial.println(sayi);
  if(buton1 == HIGH){
    sayi ++;
    delay(250);
  }
    if(buton2 == HIGH){
    sayi --;
    delay(250);
  }
  if(sayi == 0){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, LOW);
  }
  if(sayi == 1){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  }
  if(sayi == 2){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, HIGH);
  }
  if(sayi == 3){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, HIGH); 
  }
  if(sayi == 4){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);  
  }
  if(sayi == 5){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  }
  if(sayi == 6){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);    
  }
  if(sayi == 7){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, LOW);
  }
  if(sayi == 8){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  }
  if(sayi == 9){
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, HIGH); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);    
  }
  
  if(sayi > 9){
    sayi --;
  }
  if(sayi < 0){
    sayi ++;
    
  }
}

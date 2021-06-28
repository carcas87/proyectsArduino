#include <LiquidCrystal.h>

int valor, npin;
float temp;
LiquidCrystal lcd (1,2,4,5,6,7);


void setup() {
valor = 0;
temp = 0.0;
lcd.begin(16,2);
lcd.clear();

for(npin=8; npin<=10; npin++){

  pinMode(npin,OUTPUT);
  }
 
}

void loop() {
  valor = analogRead(A0);
  temp = (500.0 * valor)/1024.0;
  lcd.print("La temperatura ");
  lcd.setCursor(0,1);
  lcd.print(temp);
  delay(1000);
  lcd.clear();

if(temp < 25){
  
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  }

if(temp>=25 && temp<30){

  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);

  }

if(temp>30){
  
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  
  }
 
}
  

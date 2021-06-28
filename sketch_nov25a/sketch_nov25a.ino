
int k=0,l=0,input=0;
int cuadro=0,fila=0;
String limite="";
#include <Keypad.h>
int valorlimite=40;
const byte filas=4;
const byte columnas=4;
char teclado[filas][columnas]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte biteF[filas]={33,32,31,30};
byte biteC[columnas]={27,26,25,24};
Keypad teclado1= Keypad(makeKeymap(teclado),biteF,biteC,filas,columnas);



#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
float temp;
void setup() {
pinMode(13,OUTPUT);
pinMode(10,OUTPUT);
Serial.begin(9600);
lcd.begin(16,2);
lcd.print("Estamos a      C");
lcd.setCursor(0,1);
lcd.print("Limite a     C");
}

void loop() {
  Serial.println(analogRead(A0));//recibe valor del sensor
  temp=(500.0*analogRead(A0))/1023;
  
  if(temp>valorlimite){
      digitalWrite(13,HIGH);
      digitalWrite(10,LOW);
    }
   if(temp<valorlimite){
      digitalWrite(13,LOW);
      digitalWrite(10,HIGH);
    }
    lcd.setCursor(10,0);
  lcd.print(temp);

  if(Serial.available()>0 ){
    input=Serial.read();
    limite=limite+""+input;
    l++;
    if(l==2){//validado dos numeros
      valorlimite=limite.toInt();//Valor ay b de java se transforma a entero 
      l=0;
      limite="";
    }
  }

  char valor=teclado1.getKey();
  if ((valor)&&(k<2)){
    limite=limite+""+valor;
    k++;
  }
  if(valor=='A'){
    valorlimite=limite.toInt();
    k=0;
    limite="";
    }
    delay(100);
  lcd.setCursor(10,1);
  lcd.print(valorlimite);
}

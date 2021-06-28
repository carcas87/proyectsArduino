int k=0,l=0,input=0,cuadro=0,fila=0;
String limite="";
int valorlimite=40;
float temp;


#include <Keypad.h>
const byte filas=4;
const byte columnas=4;
char teclado[filas][columnas]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte biteF[filas]={33,32,31,30};
byte biteC[filas]={27,26,25,24};
Keypad teclado1= Keypad(makeKeymap(teclado),biteF,biteC,filas,columnas);

#include <LiquidCrystal.h>
LiquidCrystal lcd(1,2,4,5,6,7);
void setup(){
  pinMode(13,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Estamos a      C");
  lcd.setCursor(0,1);
  lcd.print("Limite a      C");
}

void loop(){
  //pinMode(A0,INPUT);
  Serial.println(analogRead(A0));
  temp=(500.0*analogRead(A0)/1023); //sensor de temperatura en V0 de arduino signal wire
    delay(100);
  if(temp>valorlimite){
    digitalWrite(13,HIGH);
    digitalWrite(10,LOW);
  }
  lcd.setCursor(10,0);
  lcd.print(temp, 1);                                //modific

  if(Serial.available()>0){
    input=Serial.read();
    limite=limite+""+input;
    l++;
    if(l==2){//validado deos numeros
      valorlimite=limite.toInt();
      l=0;
      limite="";
    }
  }
  char valor=teclado1.getKey();
    if ((valor)&&(k<2)){
    limite=limite+""+valor;
    k++;
  }
  if (valor=='A'){
    valorlimite=limite.toInt();
    k=0;
    limite="";
  }
  delay(200);//.10 fraccion de segundo
  lcd.setCursor(0,1);//(10,1);
  lcd.print(valorlimite);
}

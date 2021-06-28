#include <LiquidCrystal.h>
#include <pt.h>


LiquidCrystal lcd (1, 2, 4, 5, 6, 7); //salidas de config pines lcd
int    valor, npin;
float  temp;
float  SUMA;
int    buzzer = 11;
int    screenWidth = 16;
int    screenHeigth = 16;
String line1 = "La Temp es:";
String line2 = "   Hola Mundo...  made in arduino (*_*) Alv... " ;
int    stringStart, stringStop = 0;
int    scrollCursor = screenWidth;
          //secuencias para llamar las secuencias hilo

struct pt hilo1;
struct pt hilo2;
struct pt hilo3;
          //inicio de metodos
void setup() {
  PT_INIT(&hilo1);
  PT_INIT(&hilo2);
  PT_INIT(&hilo3);
}
            //ciclos de metodos
void loop() {
  parpadeo(&hilo1);
  parpadeo2(&hilo2);
  parpadeo3(&hilo3);
}

void parpadeo(struct pt *pt) {  
  PT_BEGIN(pt);                 //aqui inicia protothread
  
  static long t = 0;
  
  pinMode(10, OUTPUT);
  // }
  
  do {
  // void loop() {
    digitalWrite(10, HIGH);
    //funcion equivalente a delay 1000
    t = millis();
    PT_WAIT_WHILE(pt, (millis()-t)<1000);  //espera 1 seg
    
    digitalWrite(10, LOW);
    t = millis();
    PT_WAIT_UNTIL(pt, (millis()-t)>=1000);
  // }
  } while(true);
  PT_END(pt);
}

{
      //--------------------------------------------------------bloque sensor temp---------------------------------
      // Serial.println("temp ");
      //delay(100);
                                              //operacion para obtetener temp celcius 
      SUMA = 0;
      for (int i=0; i<15; i++){               //linea para sacar promedio de temps ajustar al gusto
      valor = analogRead(A0);
      temp =  ((valor * 5000.0)/1023) /10;   
      SUMA= temp + SUMA;
      
   } 

   
void parpadeo2(struct pt *pt) {
  PT_BEGIN(pt);
  // void setup() {
  static long t = 0;
  pinMode(9, OUTPUT);
  // }
  
  do {
  // void loop() {
    digitalWrite(9, HIGH);
    t = millis();
    PT_WAIT_WHILE(pt, (millis()-t)<500);
    
    digitalWrite(9, LOW);
    t = millis();
    PT_WAIT_UNTIL(pt, (millis()-t)>=1000);
  // }
  } while(true);
  PT_END(pt);
}

void parpadeo3(struct pt *pt) {
  PT_BEGIN(pt);
  // void setup() {
  static long t = 0;
  pinMode(8, OUTPUT);
  // }
  
  do {
  // void loop() {
    digitalWrite(8, HIGH);
    t = millis();
    PT_WAIT_WHILE(pt, (millis()-t)<150);
    
    digitalWrite(8, LOW);
    t = millis();
    PT_WAIT_UNTIL(pt, (millis()-t)>=150);
  // }
  } while(true);
  PT_END(pt);
}

#include <LiquidCrystal.h>

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
void setup(){
      valor = 0;
      temp = 0.0;
      lcd.begin(16, 2);       //inicio de leyenda en screen
     // Serial.begin(9600);

      for (npin = 8; npin <= 10; npin++)
      {
        pinMode(npin, OUTPUT);                               //config pin digital
      }
        pinMode(buzzer, OUTPUT);                             //config pin digital
      
        }

void loop()
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
      //----------------------------------------------------------bloque pantalla lcd--------------------------------
      lcd.setCursor(0, 0);                            //linea para escribir en el lcd primera linea
      lcd.print(line1);
      lcd.print(temp);                                //linea para mostrar la temp actual en pantalla
      lcd.setCursor(scrollCursor, 1);
      lcd.print(line2.substring(stringStart, stringStop));
          delay(250);                                       //velocidad del scroll display
      lcd.clear();

  if (stringStart == 0 && scrollCursor > 0) {
      scrollCursor--;
      stringStop++;
     }
  else if (stringStart == stringStop) {
      stringStart = stringStop = 0;
      scrollCursor = screenWidth;
    }
  else if (stringStop == line2.length() && scrollCursor == 00) {
      stringStart++;
  }
  else {
      stringStart++;
      stringStop++;
  }
      //-------------------------------------------------------------bloque operaciones leds---------------------
  if (temp < 24)     //configuracion de rango temp min
     {
      lcd.setCursor(1, 2);
      lcd.print("Temp baja ");
          digitalWrite(8, HIGH);
          digitalWrite(9, LOW);
          digitalWrite(10, LOW);
          noTone(buzzer);
      }

  if (temp >= 24 && temp <= 37)   //configuracion de rango temp med
     {

      lcd.setCursor(1, 2);
      lcd.print("Temp Media");
  
          digitalWrite(8, LOW);
          digitalWrite(9, HIGH);
          digitalWrite(10, LOW);
          noTone(buzzer);
       }

  if (temp > 37)  {
          lcd.setCursor(1, 2);
          lcd.print("Temp alta ");     //configuracion de rango temp alta
          digitalWrite(8, LOW);
          digitalWrite(9, LOW);
          digitalWrite(10, HIGH);
      
          tone(buzzer, 1000); // Send 1KHz sound signal... //inicio de buzzer , sonido configurable
          delay(1000);        // ...for 1 sec
          noTone(buzzer);     // Stop sound...
          delay(1000);        // ...for 1sec
      
          }

}

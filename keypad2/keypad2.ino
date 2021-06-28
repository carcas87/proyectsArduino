#include <Keypad.h>

 const byte Filas = 4;          //Cuatro filas
     const byte Cols = 4;           //Cuatro columnas
   // String pulsacion ="";

     byte Pins_Filas[] = {14, 15, 16, 17};     //Pines Arduino para las filas
     byte Pins_Cols[] = { 18,19,20,21};     // Pines Arduinopara las columnas
     char Teclas [ Filas ][ Cols ] =
          {
              {'1','2','3','A'},
              {'4','5','6','B'},
              {'7','8','9','C'},
              {'*','0','#','D'}
          };
     Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);
 
     void setup()
        {             Serial.begin(9600) ; }
        String  p;
     void loop()
        {      
          char pulsacion = Teclado1.getKey() ;
          p+= (String)pulsacion;
                if (pulsacion != 0)              // Si el valor es 0 es que no se
                    Serial.println(pulsacion);   // se ha pulsado ninguna tecla
                    Serial.println(p);
        }

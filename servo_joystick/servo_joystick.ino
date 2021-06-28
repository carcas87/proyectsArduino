#include <Servo.h>          //  librería Servo
Servo servo1;               // objeto tipo Servo llamado servo1
Servo servo2;
int angulo = 0 ;//declaracion de variable en 1
int angulo2 = 0;//DECLARQACION DE VARIABLE EN 2
int Eje_X = A1 ;
int Eje_Y = A2 ;
int boton = 4  , LED = 13 ;

void setup()
    {
        servo1.attach(9) ;  // Conectar servo1 al pin 9
        servo2.attach(10);
        pinMode( boton, INPUT_PULLUP) ;
    }

void loop()
    {
        angulo  = map( analogRead(A1), 0, 1024, 0, 180);
        angulo2  = map( analogRead(A2), 0, 1024, 0, 180);
        
        servo1.write(angulo);
        servo2.write(angulo2);
        if ( ! digitalRead(boton))
              digitalWrite(LED, HIGH);
        else
              digitalWrite(LED, LOW);
        delay(250) ;
           }

//programa para servo 360°
//codigo basee  modified

//Programmer Carlos Castillo 11/9/19
///servo program to secuence building people dancing
#include <Servo.h>

Servo servo;
int pinServo = 3; //variable Out of arduino 
int pulsoMin = 720;  //RANGE MIN SERVO
int pulsoMax = 2200;         //RANGE MAX SERVO
int c=0;

void setup() 
{
  servo.attach(pinServo ,pulsoMin, pulsoMax );
}
void loop() {


for( c=0; c<2 ; c++) //counter for number of cicles of secuences
    {     
   servo.write(180);
    delay(800);
    servo.write(100);
      delay(1000);
      servo.write(180);
       delay(800);
        servo.write(100);
         delay(1300); 
         servo.write(180);
           delay(800);
             servo.write(100);
                 delay(1300); 
                servo.write(0);
                  delay(1300);
                  servo.write(90);
                    delay(800);
                    servo.write(0);
                     delay(1300);
                      servo.write(90);
                       delay(800);
                       servo.write(0);
                         delay(1300);
/////////////////////////////secuence #2/////////////////
               servo.write(180);
                  delay(1000);
                  servo.write(0);
                    delay(1000);
                    servo.write(180);
                     delay(1000);
                      servo.write(0);
                       delay(100);
                       servo.write(180);
                         delay(1000);
                         servo.write(0);
                           delay(1000);
                           servo.write(180);
                             delay(1000);
                             servo.write(0);
                               delay(1000);
                               servo.write(180);  
                                 delay(700);
                                 servo.write(0);
                                   delay(400);
                                   servo.write(180);  ///
                                     delay(500);
                                     servo.write(0);
                                       delay(800);
                                         servo.write(180);
                                             delay(400);
                                              servo.write(0);
                                                 delay(500);
                                                servo.write(180);
                                                    delay(800);
                                                    servo.write(0);
                                                       delay(300);
                                                       servo.write(180);
                                                        delay(500);
                                                          servo.write(0);
                                                            delay(300);
                                                            servo.write(180);
                                                              delay(700);
                                                              servo.write(0);
                                                                delay(500);
                                  delay(1000);   
////////////////////////////////////secuence  # 3////////////////////////////                                       
              servo.write(0);
                delay(800);
                servo.write(180);
                  delay(800);
                  servo.write(0);
                   delay(800);
                     servo.write(0);
                      delay(800);
                       servo.write(180);
                         delay(800);
                          servo.write(0);
                           delay(800);
                            servo.write(180);
                              delay(800);
                               servo.write(0);
                                 delay(800);
                                 servo.write(0);
                                   delay(800);
                                    servo.write(180);
                                     delay(800);
                                       servo.write(180);
                                         delay(800);
              servo.write(180);
               delay(800);
                servo.write(0);
                  delay(800);
                  servo.write(0);
                   delay(800);
                     servo.write(180);
                      delay(800);
                       servo.write(0);
                         delay(800);
                          servo.write(90);
                           delay(800);
                            servo.write(0);
                              delay(800);
                               servo.write(180);
                                 delay(800);
                                 servo.write(0);
                                   delay(800);
                                    servo.write(180);
                                     delay(800);
                                       servo.write(0);
                                         delay(800);                                   
           
    }                                         
      delay(1000);
      
}
 

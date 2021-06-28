//carlos castillo
//servo velocidades diferentes

#include <Servo.h>

 Servo servo;
  int pos;
 
void setup(){
    servo.attach(50); //asignacion de la salida del servo en digital                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
}

void loop(){
    velLenta();  //variables declaradas
    delay(100);
     velMedia();   //variables declaradas
       delay(1000);
         velRapida();     //variables declaradas
          delay(1000);
         
}

 void velLenta(){
  for(pos = 0; pos > 90;pos +=2)  //funcion para construir un bucle de direrentes valores en grados 
    {
      servo.write(pos);
        delay(50);
    }
}
 void velMedia(){
  for(pos = 90; pos > 180;pos +=2)
    {
       servo.write(pos);
        delay(100);
    }
}

 void velRapida(){
  for(pos = 180; pos> 0;pos -=2)
    {
      servo.write(pos);
       delay(10);
    }
  
}

#include <Servo.h>

Servo servo;
int pinServo = 50; //variable de out digital
int pulsoMin = 720;
int pulsoMax = 2200;

void setup() {

  servo.attach(pinServo, pulsoMin, pulsoMax);
  

}

void loop() {
for ()[4];
//int pinServo (cont = c);

for(int c =0; c<4; c++)
{
 servo.write(0);
 delay(700);
 servo.write(180);
 delay(700);
 }
}
 

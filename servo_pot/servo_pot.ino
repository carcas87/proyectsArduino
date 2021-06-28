#include <Servo.h> //libreria del servo

Servo servo_1;
Servo servo_2;

int potpin = 0;  //valor inicial servo
//int potpin = 1;
int val;

void setup() {
  servo_1.attach(9); //entrada pwm del arduino
  servo_2.attach(10);
}
void loop() {
  val = analogRead(potpin 0);            //  the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     //  (value between 0 and 180)
  servo_1.write(posicion_servo_1);                  // e servo position according to the scaled value
  servo_1.write(valor entre 0 y 180);
  delay(15);                           // waits for the servo to get there

  /*val = analogRead(potpin 1);            //  the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     //  (value between 0 and 180)
  myservo.write(val);                  // e servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
  */
}

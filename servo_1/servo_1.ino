#include <Servo.h>

Servo myservo;

int potpin = 0;
int val;

void setup() {
  myservo.attach(9); 
}
void loop() {
  val = analogRead(potpin);            //  the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     //  (value between 0 and 180)
  myservo.write(val);                  // e servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}

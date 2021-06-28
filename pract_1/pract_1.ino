
//const int led = 50; //va fuera del setup para que sea variable global se hace constante
#define led1 50  //sin punto y coma y sin valor =
#define led2 8
#define led3 9
#define led4 10
void setup() {
  
  pinMode(50, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}


void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(300); 
   digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);// wait for a second
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  
  //digitalRead(PIN);
  //analogWrite(PIN,VALOR);
  //analogRead(PIN);
  
}

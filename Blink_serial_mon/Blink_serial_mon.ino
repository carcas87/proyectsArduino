//blink led stock , with monitor serial  ,needs to open monitor serial to watch the work

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
   Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  Serial.println("ON");
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);      
  Serial.println("OFF");// wait for a second
}

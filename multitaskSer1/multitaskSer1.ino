void setup() {
  Serial.begin(9600);

}

void loop() {     //funcion millis para ver las condicion de tiempo midiendolo y manejando el uso del tiempo*
  unsigned long  lectura = millis();    //also we can use function micros*
  delay (1000);
  Serial.println(lectura);      //aqui print los miliseconds en el monitor , " referencia"

}

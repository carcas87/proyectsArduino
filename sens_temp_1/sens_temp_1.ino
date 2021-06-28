float temp;
int valor;
void setup() {
  temp = 0.0;
  valor = 0;
pinMode(11,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);

}

void loop() {
//double t = analogRead(A0);
valor = analogRead(A0);
temp = (500.0 * valor)/1024.0;
delay(500);
//double temp = volts * 100;
Serial.println(temp);
}

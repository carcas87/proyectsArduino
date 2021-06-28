void setup() {

for (int i=30; i<38; i++)   //aqui se asigna la salida del pin digital
  pinMode (i,  OUTPUT);
  
}

void loop() {
 for(int i=30;i<38;i++){
    digitalWrite(i,HIGH);
      delay(80);
  }
   
 for(int i=30;i<38;i++){
     digitalWrite(i,LOW);
      delay(150);
    }
}

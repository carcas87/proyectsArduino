void setup() {
  pinMode(A1, OUTPUT);//blue
  pinMode(A2, OUTPUT);//green
  pinMode(A3, OUTPUT);//red

}

void loop() {
  analogWrite(A1, 126);
  analogWrite(A2, 50);
  analogWrite(A3, 255);
  delay(1000);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(200);
  analogWrite(A1, 200);
  analogWrite(A2, 200);
  analogWrite(A3, 200);
  delay(150);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(150);

  analogWrite(A1, 20);
  analogWrite(A2, 100);
  analogWrite(A3, 250);
  delay(200);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(200);
  analogWrite(A1, 30);
  analogWrite(A2, 200);
  analogWrite(A3, 300);
  delay(150);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(300);
  analogWrite(A1, 220);
  analogWrite(A2, 50);
  analogWrite(A3, 10);
  delay(150);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(150);
  analogWrite(A1, 30);
  analogWrite(A2, 100);
  analogWrite(A3, 255);
  delay(150);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(100);
  analogWrite(A1, 100);
  analogWrite(A2, 50);
  analogWrite(A3, 0);
  delay(100);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(100);
  analogWrite(A1, 255);
  analogWrite(A2, 20);
  analogWrite(A3, 10);
  delay(100);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(200);
  analogWrite(A1, 200);
  analogWrite(A2, 20);
  analogWrite(A3, 25);
  delay(100);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  delay(100);
  
  
}

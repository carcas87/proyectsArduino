const int Fa =  12;//trste 2
const int Sol = 11;//trste 3
const int La =  9 ;//trste 5
const int Si =  7;//trste 7
const int Re =  4;//trste 10


void setup()
{
  
  
  pinMode(La, OUTPUT);
  pinMode(Si, OUTPUT);
  pinMode(Fa, OUTPUT);
  pinMode(Sol, OUTPUT);
  pinMode(Re, OUTPUT);
  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop()
{
  
  digitalWrite(Si, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Si, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(Si, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(Si, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(Re, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(Re, LOW);
  delay(100); // Wait for 1000 millisecond(s)
    
  digitalWrite(Si, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(Si, LOW);
  delay(100); // Wait for 1000 millisecond(s)
    
  digitalWrite(La, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(La, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(Sol, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Sol, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(Fa, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Fa, LOW);
  delay(250); // Wait for 1000 millisecond(s)
}

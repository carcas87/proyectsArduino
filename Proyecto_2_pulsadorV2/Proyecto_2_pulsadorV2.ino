//Declaracion de pines
int led_1 = 22;
int led_2 = 23;
int led_3 = 24;
int led_4 = 25;
int led_5 = 26;
int pulsadorAvanzar = 27;
int pulsadorRetroceder = 28;
int presionado1 = 0; //Variable usada para el antirrebote del pulsador avanzar
int presionado2 = 0; //Variable usada para el antirrebote del pulsador disminuir
int contador;   //Variable asociada a un contador

void setup() {

  //Declaracion de entradas/salidas digitales
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(pulsadorAvanzar, INPUT);
  pinMode(pulsadorRetroceder, INPUT);

}

void loop() {

  //Secuencia para aumentar o avanzar

  if (digitalRead(pulsadorAvanzar) == LOW)
  {
    presionado1 = 1; //Cambia de estado si se presiona el pulsador
  }
  if (digitalRead(pulsadorAvanzar) == HIGH && presionado1 == 1)
  {
    presionado1 = 0; //Se reinicia la variable del antirrebote
    contador++;     //El contador aumenta en una unidad

    if (contador > 4)
    {
      contador = 0;       //Se reinicia el contador regresando al LED 1
    }
  }

  //Secuencia para disminuir o retroceder

  if (digitalRead(pulsadorRetroceder) == LOW)
  {
    presionado2 = 1;          //Cambia de estado si se presiona el pulsador
  }
  if (digitalRead(pulsadorRetroceder) == HIGH && presionado2 == 1)
  {
    presionado2 = 0;         //Se reinicia la variable del antirrebote
    contador--;             //El contador disminuye en una unidad

    if (contador < 0)
    {
      contador = 4;       //Se reinicia el contador regresando al LED 5
    }
  }


  switch (contador)
  {
    //Enciende los LEDs de acuerdo al contador

    case 0:
      digitalWrite(led_1, HIGH); //Enciende el LED 1 y apaga los demas
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      break;

    case 1:
      digitalWrite(led_2, HIGH); //Enciende el LED 2 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      break;

    case 2:
      digitalWrite(led_3, HIGH); //Enciende el LED 3 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      break;

    case 3:
      digitalWrite(led_4, HIGH); //Enciende el LED 4 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_5, LOW);
      break;

    case 4:
      digitalWrite(led_5, HIGH); //Enciende el LED 5 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      break;
  }
}

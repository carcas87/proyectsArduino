//Declaracion de pines jj
int led_1 = 30;
int led_2 = 31;
int led_3 = 32;
int led_4 = 33;
int led_5 = 34;
int led_6 = 35;
int led_7 = 36;
int led_8 = 37;
int pulsadorAvanzar = 10;
int pulsadorRetroceder = 11;
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
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
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

    if (contador > 7)//mod v1
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
      contador = 7;       //Se reinicia el contador regresando al LED 8
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
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      break;

    case 1:
      digitalWrite(led_2, HIGH); //Enciende el LED 2 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      break;

    case 2:
      digitalWrite(led_3, HIGH); //Enciende el LED 3 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      break;

    case 3:
      digitalWrite(led_4, HIGH); //Enciende el LED 4 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      break;

    case 4:
      digitalWrite(led_5, HIGH); //Enciende el LED 5 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      break;

      case 5:
      digitalWrite(led_6, HIGH); //Enciende el LED 6 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      break;
  case 6:
      digitalWrite(led_7, HIGH); //Enciende el LED 7 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_8, LOW);
      break;

      case 7:
      digitalWrite(led_8, HIGH); //Enciende el LED 8 y apaga los demas
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      break;
  }
}

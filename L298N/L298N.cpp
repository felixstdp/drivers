#include <Arduino.h>
#include "L298N.h"

L298N::L298N(int IN1, int IN2, int IN3, int IN4, int ENA, int ENB)
{
  
  // Inicializa el objeto con una distribución de patas libre
  _IN1 = IN1;
  _IN2 = IN2;
  _IN3 = IN3;
  _IN4 = IN4;
  _ENA = ENA;
  _ENB = ENB;

  pinMode(_IN1, OUTPUT);
  pinMode(_IN2, OUTPUT);
  pinMode(_IN3, OUTPUT);
  pinMode(_IN4, OUTPUT);
  pinMode(_ENA, OUTPUT);
  pinMode(_ENB, OUTPUT);
}

void L298N::forward(int velocidad_L, int velocidad_R, int tiempo)
{
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, HIGH);
  analogWrite(_ENA, constrain (velocidad_L, 0, 255));

  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, HIGH);
  analogWrite(_ENB, constrain (velocidad_R, 0, 255));

  delay (abs (tiempo));

  brake (0);
}

void L298N::reverse(int velocidad_L, int velocidad_R, int tiempo)
{
  digitalWrite(_IN1, HIGH);
  digitalWrite(_IN2, LOW);
  analogWrite(_ENA, constrain (velocidad_L, 0, 255));
  
  digitalWrite(_IN3, HIGH);
  digitalWrite(_IN4, LOW);
  analogWrite(_ENB, constrain (velocidad_R, 0, 255));

  delay (abs (tiempo));

  brake (0);
}

void L298N::brake(int tiempo)
{
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, LOW);

  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, LOW);

  delay (abs (tiempo));
}

void L298N::rotate(int velocidad, int tiempo)
{
  analogWrite(_ENA, constrain (velocidad, 0, 255));
  analogWrite(_ENB, constrain (velocidad, 0, 255));

  if (tiempo > 0) {
    digitalWrite(_IN1, LOW);
    digitalWrite(_IN2, HIGH);
    digitalWrite(_IN3, HIGH);
    digitalWrite(_IN4, LOW);
   }
  else
  {
    digitalWrite(_IN1, HIGH);
    digitalWrite(_IN2, LOW);
    digitalWrite(_IN3, LOW);
    digitalWrite(_IN4, HIGH);
} 

  delay(abs(tiempo));

  brake (0);
  }


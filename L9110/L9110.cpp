#include <Arduino.h>
#include "L9110.h"

L9110::L9110(int AIA, int AIB, int BIA, int BIB)
{
  
  // Inicializa el objeto con una distribución de patas libre
  _AIA = AIA;
  _AIB = AIB;
  _BIA = BIA;
  _BIB = BIB;
  
  pinMode(_AIA, OUTPUT);
  pinMode(_AIB, OUTPUT);
  pinMode(_BIA, OUTPUT);
  pinMode(_BIB, OUTPUT);
}

void L9110::forward(int velocidad_L, int velocidad_R, int tiempo)
{
  analogWrite(_AIA, constrain (velocidad_L, 0, 255));
  analogWrite(_AIB, 0);
  analogWrite(_BIA, constrain (velocidad_R, 0, 255));
  analogWrite(_BIB, 0);

  delay (abs (tiempo));

  brake (0);
}

void L9110::reverse(int velocidad_L, int velocidad_R, int tiempo)
{
  analogWrite(_AIA, 0);
  analogWrite(_AIB, constrain (velocidad_L, 0, 255));
  analogWrite(_BIA, 0);
  analogWrite(_BIB, constrain (velocidad_R, 0, 255));

  delay (abs (tiempo));

  brake (0);
}

void L9110::brake(int tiempo)
{
  analogWrite(_AIA, 0);
  analogWrite(_AIB, 0);
  analogWrite(_BIA, 0);
  analogWrite(_BIB, 0);

  delay (abs (tiempo));
}

void L9110::rotate(int velocidad, int tiempo)
{
  if (tiempo > 0) {
  analogWrite(_AIA, 0);
  analogWrite(_AIB, constrain (velocidad, 0, 255));
  analogWrite(_BIA, constrain (velocidad, 0, 255));
  analogWrite(_BIB, 0);
   }
  else
  {
  analogWrite(_AIA, constrain (velocidad, 0, 255));
  analogWrite(_AIB, 0);
  analogWrite(_BIA, 0);
  analogWrite(_BIB, constrain (velocidad, 0, 255));
} 

  delay(abs(tiempo));

  brake (0);
}

#include <Arduino.h>
#include "Ardumoto.h"

// define los pins de la shield Ardumoto de control de motores

#define dirL 13 // pin de dirección para la rueda izquierda (B)
#define velL 11 // pin de velocidad para la rueda izquierda
#define dirR 12 // pin de dirección para la rueda derecha (A)
#define velR 3 // pin de velocidad para la rueda derecha

Ardumoto::Ardumoto(){
  pinMode(dirL,OUTPUT);
  pinMode(velL,OUTPUT);
  pinMode(dirR,OUTPUT);
  pinMode(velR,OUTPUT);
}

void Ardumoto::forward(int l, int r, int t)
{
  analogWrite(velL,l);
  analogWrite(velR,r);
  digitalWrite(dirL,HIGH);
  digitalWrite(dirR,HIGH);
  delay(t);
}

void Ardumoto::reverse(int l, int r, int t)
{
  analogWrite(velL,l);
  analogWrite(velR,r);
  digitalWrite(dirL,LOW);
  digitalWrite(dirR,LOW);
  delay(t);
}

void Ardumoto::brake(int t)
{
  analogWrite(velL,0);
  analogWrite(velR,0);
  delay(t);
}

void Ardumoto::rotate(int t)
{
  analogWrite(velL,100);
  analogWrite(velR,100);
  if (t>0) {
    digitalWrite(dirR,LOW);
    digitalWrite(dirL,HIGH);
  }
  else
  {
    digitalWrite(dirR,HIGH);
    digitalWrite(dirL,LOW);
  }
  delay(abs(t));
}

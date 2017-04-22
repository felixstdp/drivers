#include <Arduino.h>
#include "Pablo.h"

L298D::L298D(){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(speakerPin,OUTPUT); //buzzer
}

void L298D::forward(int l, int r, int t)
{
  analogWrite(3,l);
  analogWrite(6,r);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(t);
}

void L298D::reverse(int l, int r, int t)
{
  analogWrite(3,l);
  analogWrite(6,r);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(t);
}

void L298D::brake(int t)
{
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(t);
}

void L298D::rotate(int t)
{
  analogWrite(3,128);
  analogWrite(6,128);
  if (t>0) {
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
   }
  else
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  }
  delay(abs(t));
}

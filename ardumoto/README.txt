ardumoto.ino

Sparkfun Ardumoto Motor Control Shield library

Librería de funciones de movimiento para el la shield Ardumoto de Sparkfun con Arduino UNO

Los archivos de librería Ardumoto.h y Ardumoto.cpp deben estar en la carpeta de librerías personales de Arduino

Las funciones de esa librería son

Ardumoto nombredelobjeto; / para crear el objeto que se usará luego

nombredelobjeto.forward(l,r,t); // movimiento hacia adelante con r,l velocidad de las ruedas izquierda y derecha entre 0 y 255, durante t tiempo en ms

nombredelobjeto.reverse(l,r,t); // idem hacia atrás

nombredelobjeto.rotate(t); // gira durante un tiempo t (positivo o nevativo para girar a derecha e izquierda

nombredelobjeto.brake(t); // para durante un tiempo t los dos motores

Los ejemplos de uso necesitan además la librería NewPing.h

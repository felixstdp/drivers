Librería para usar el driver de motores L298N con 6 pines de control

Es válido con la misma estructura para el integrado L297D

Los archivos de librería L298N.h y L298N.cpp deben estar en la carpeta de librerías personales de Arduino

Las funciones de esa librería son

L298N nombredelobjeto(IN1, IN2, IN3, IN4, ENA, ENB); // para crear el objeto que se usará luego declarando los pines de Arduino

nombredelobjeto.forward(l,r,t); // movimiento hacia adelante con r,l velocidad de las ruedas izquierda y derecha, durante t tiempo en ms

nombredelobjeto.reverse(l,r,t); // idem hacia atrás

nombredelobjeto.rotate(v,t); // gira con velocidad v durante un tiempo t (positivo o nevativo para girar a derecha e izquierda)

nombredelobjeto.brake(t); // detiene durante un tiempo t los dos motores


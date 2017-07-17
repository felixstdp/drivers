Librería para usar el driver de motores TB6612 con 7 pines de control

Los archivos de librería TB6612.h y TB6612.cpp deben estar en la carpeta de librerías personales de Arduino

Las funciones de esa librería son

TB6612 nombredelobjeto(AIN1, AIN2, BIN1, BIN2, PWMA, PWMB, STBY); // para crear el objeto que se usará luego declarando los pines de Arduino

nombredelobjeto.forward(l,r,t); // movimiento hacia adelante con r,l velocidad de las ruedas izquierda y derecha, durante t tiempo en ms

nombredelobjeto.reverse(l,r,t); // idem hacia atrás

nombredelobjeto.rotate(v,t); // gira con velocidad v durante un tiempo t (positivo o nevativo para girar a derecha e izquierda)

nombredelobjeto.brake(t); // detiene durante un tiempo t los dos motores

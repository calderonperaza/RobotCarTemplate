#include <RobotCar.h>
Carro m1;


void setup() {
  // no se necesita codigo porque el constructor de la clase configura todo

}

void loop() {
  // put your main code here, to run repeatedly:
m1.mover(255,255); //moverse hacia adelante
delay(3000);
m1.mover(-255,-255); //moverse hacia atras
delay(3000);
m1.mover(-255,0);  //se mueve solo la llanta izquierda hacia atras
delay(3000);
m1.mover(0,-255);//se mueve solo la llanta derecha hacia atras
delay(3000);
m1.mover(-255,-255); //ambas llantas hacia atras
delay(3000);
m1.mover(-125,-125); //ambas llantas hacia atras con una potencia de 125
delay(3000);
}
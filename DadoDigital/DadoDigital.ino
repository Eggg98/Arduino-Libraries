#include "Dado.h"

//Pines usados para la comunicación SPI con la matriz LED MAX7219
int PinData=12; 
int PinClk=10;
int PinCs=11;

int NDados=2; // Indica cuantos dados se usaran (1 o 2)
int Pdobles=9; // Con este pin se indicara cuando el resultado corresponda a un doble, ideal es usar el pin que va conectado al LED de la placa para no agregar mas elementos

Dado D(PinData, PinClk, PinCs, NDados, Pdobles);

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT); //En este ejemplo para activar el dado se usara un pulsador en configuracion pull-up
}

void loop() {
  if(digitalRead(2)==LOW){
    Serial.print(D.Rolldice());
  }
  delay(100);
}

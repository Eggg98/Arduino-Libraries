#include "Bateria.h"

int LimB=0; // Limite bajo del nivel de batería (Medida ADC)
int LimA=30; // Limite alto del nivel de batería (Medida ADC)
Bateria BA(LimB, LimA, 6); // El último valor correspondera al tamaño del array con el que se obtendra el promedio de las medidas de batería realizadas

void setup() {
  Serial.begin(9600);
}

void loop() {
   BA.MedidaNueva(analogRead(A0));
   Serial.print(BA.ValorActual());
   delay(10000);
}

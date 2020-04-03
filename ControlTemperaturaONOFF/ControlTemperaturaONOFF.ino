#include "ONOFF.h"

int Salida=3; // Pin del actuador
int SetpointA=30; //Limite alto de la banda de control
int SetpointB=25;  //Limite bajo de la banda de control
// Es necesario el uso de una banda de control para evitar que el actuador este constantemente encendiendose y apagadonse en un intervalo muy pequeño
bool Modo=1; /* Se establece si el actuador provoca un cambio positivo o negativo en la variable de control, por ejemplo, si el actuador en un control de temperatura es un calentador,
 al activarlo la temperatura aumentara (Modo directo=1), a diferencia de si el actuador es un ventilador, el cual provocara una disminución de la temperatura (Modo inverso=0)*/

ControladorONOFF Temperatura(Salida, SetpointA, SetpointB, Modo);

void setup() {
}

void loop() {
   Temperatura.ControlNow(map(analogRead(A0), 0, 1023, 20, 40));
   delay(500);
}

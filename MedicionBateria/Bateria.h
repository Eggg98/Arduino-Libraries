/*
  Bateria.h - Libreria sencilla para el monitoreo del nivel de carga de una bateria
  Creada por Edgar Garcia el 04/04/2020.
  Liberada para el uso publico.
*/

#ifndef Bateria_h
#define Bateria_h
 
#include "Arduino.h"
 
class Bateria
{
  public:
    Bateria(int LimiteBajo, int LimiteAlto, int NumerodeMedidas);
    void MedidaNueva (int Entrada);
    int ValorActual ();
  private:
    int _LimiteBajo;
    int _LimiteAlto;
    int _NumerodeMedidas;
    int i;
    int j;
    int k;
    int Batprom;
    word BatM[];
};
 
#endif

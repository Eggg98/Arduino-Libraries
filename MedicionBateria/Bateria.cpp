/*
  Bateria.h - Libreria sencilla para el monitoreo del nivel de carga de una bateria
  Creada por Edgar Garcia el 04/04/2020.
  Liberada para el uso publico.
*/

#include "Arduino.h"
#include "Bateria.h"
 
Bateria::Bateria(int LimiteBajo, int LimiteAlto, int NumerodeMedidas)
{
  _LimiteBajo = LimiteBajo;
  _LimiteAlto = LimiteAlto;
  _NumerodeMedidas = NumerodeMedidas;
  BatM[_NumerodeMedidas];
  i=0;
  k=0;
}

void Bateria::MedidaNueva(int Entrada)
{
    BatM[j]=Entrada;
    i++;
    if(i>=_NumerodeMedidas){
      i=0;
    }
}

int Bateria::ValorActual()
{
    Batprom=0;
    for (j=0; j<_NumerodeMedidas; j++){
      if (BatM[j] >= _LimiteBajo){
        Batprom=Batprom+BatM[j]; 
      }
      else {
        k++;
      }
    }
    if(k==5){
      Batprom=_LimiteBajo;
    }
    else {
      Batprom=Batprom/(_NumerodeMedidas-k);
    }
    k=0;
    Batprom=constrain(Batprom, _LimiteBajo, _LimiteAlto);
    Batprom=map(Batprom, _LimiteBajo, _LimiteAlto, 0, 100);
    return Batprom;
}

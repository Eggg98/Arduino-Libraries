/*
  ONOFF.h - Libreria sencilla para control On/Off o Todo/Nada de procesos
  Creada por Edgar Garcia el 03/04/2020.
  Liberada para el uso publico.
*/

#ifndef ONOFF_h
#define ONOFF_h
 
#include "Arduino.h"
 
class ControladorONOFF
{
  public:
    ControladorONOFF(int pinS, int SetPA, int SetPB, bool Modo);
    void ControlNow(int Entrada);
  private:
    int _pinS;
    int _SetPA;
    int _SetPB;
    bool _Modo;
};
 
#endif

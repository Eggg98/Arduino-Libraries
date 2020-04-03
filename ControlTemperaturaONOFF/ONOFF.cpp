/*
  ONOFF.cpp - Libreria sencilla para control On/Off o Todo/Nada de procesos
  Creada por Edgar Garcia el 03/04/2020.
  Liberada para el uso publico.
*/

#include "Arduino.h"
#include "ONOFF.h"
 
ControladorONOFF::ControladorONOFF(int pinS, int SetPA, int SetPB, bool Modo)
{
  pinMode(pinS, OUTPUT);
  _pinS = pinS;
  _SetPA = SetPA;
  _SetPB = SetPB;
  _Modo = Modo;
}

void ControladorONOFF::ControlNow(int Entrada)
{
   if (Entrada<=_SetPB){
      if (_Modo==1){
         digitalWrite(_pinS, HIGH);
      }
      else {
         digitalWrite(_pinS, LOW);
      }
   }
   else if (Entrada>=_SetPA) {
      if (_Modo==1){
         digitalWrite(_pinS, LOW);
      }
      else {
         digitalWrite(_pinS, HIGH);
      }
   }
}

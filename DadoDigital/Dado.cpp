/*
  Dado.h - Libreria sencilla para convertir un Arduino junto con una matriz LED MAX7219 en un dado digital
  Creada por Edgar Garcia el 05/04/2020.
  Liberada para el uso publico.
*/

#include "Arduino.h"
#include "Dado.h"
#include "LedControl.h"
 
Dado::Dado(int DataPin, int ClkPin, int CsPin, int NumerodeDados, int PinDobles)
{
  _DataPin=DataPin;
  _ClkPin=ClkPin;
  _CsPin=CsPin;
  _NumerodeDados=constrain(NumerodeDados, 1, 2);
  _PinDobles=PinDobles;
  LedControl lc=LedControl(_DataPin,_ClkPin,_CsPin,1);
  lc.shutdown(0,false);
  lc.setIntensity(0,2);
  lc.clearDisplay(0);
  pinMode(_PinDobles, OUTPUT);
}

int Dado::Rolldice()
{
  if (_NumerodeDados==1){
    dice=random(1,7);
  }
  else {
    dice1=random(1,7);
    dice2=random(1,7);
    if (dice1==dice2){
      digitalWrite(_PinDobles, HIGH);
    }
    else{
      digitalWrite(_PinDobles, LOW);
    }
    dice=dice1+dice2;
  }
  switch (dice){
    case 1:
      lc.setRow(0,0,a[0]);
      lc.setRow(0,1,a[1]);
      lc.setRow(0,2,a[2]);
      lc.setRow(0,3,a[3]);
      lc.setRow(0,4,a[4]);
      lc.setRow(0,5,a[5]);
      lc.setRow(0,6,a[6]);
      lc.setRow(0,7,a[7]);
    break;
    case 2:
      lc.setRow(0,0,b[0]);
      lc.setRow(0,1,b[1]);
      lc.setRow(0,2,b[2]);
      lc.setRow(0,3,b[3]);
      lc.setRow(0,4,b[4]);
      lc.setRow(0,5,b[5]);
      lc.setRow(0,6,b[6]);
      lc.setRow(0,7,b[7]);
    break;
    case 3:
      lc.setRow(0,0,c[0]);
      lc.setRow(0,1,c[1]);
      lc.setRow(0,2,c[2]);
      lc.setRow(0,3,c[3]);
      lc.setRow(0,4,c[4]);
      lc.setRow(0,5,c[5]);
      lc.setRow(0,6,c[6]);
      lc.setRow(0,7,c[7]);
    break;
    case 4:
      lc.setRow(0,0,d[0]);
      lc.setRow(0,1,d[1]);
      lc.setRow(0,2,d[2]);
      lc.setRow(0,3,d[3]);
      lc.setRow(0,4,d[4]);
      lc.setRow(0,5,d[5]);
      lc.setRow(0,6,d[6]);
      lc.setRow(0,7,d[7]);
    break;
    case 5:
      lc.setRow(0,0,e[0]);
      lc.setRow(0,1,e[1]);
      lc.setRow(0,2,e[2]);
      lc.setRow(0,3,e[3]);
      lc.setRow(0,4,e[4]);
      lc.setRow(0,5,e[5]);
      lc.setRow(0,6,e[6]);
      lc.setRow(0,7,e[7]);
    break;
    case 6:
      lc.setRow(0,0,f[0]);
      lc.setRow(0,1,f[1]);
      lc.setRow(0,2,f[2]);
      lc.setRow(0,3,f[3]);
      lc.setRow(0,4,f[4]);
      lc.setRow(0,5,f[5]);
      lc.setRow(0,6,f[6]);
      lc.setRow(0,7,f[7]);
    break;
    case 7:
      lc.setRow(0,0,g[0]);
      lc.setRow(0,1,g[1]);
      lc.setRow(0,2,g[2]);
      lc.setRow(0,3,g[3]);
      lc.setRow(0,4,g[4]);
      lc.setRow(0,5,g[5]);
      lc.setRow(0,6,g[6]);
      lc.setRow(0,7,g[7]);
    break;
    case 8:
      lc.setRow(0,0,h[0]);
      lc.setRow(0,1,h[1]);
      lc.setRow(0,2,h[2]);
      lc.setRow(0,3,h[3]);
      lc.setRow(0,4,h[4]);
      lc.setRow(0,5,h[5]);
      lc.setRow(0,6,h[6]);
      lc.setRow(0,7,h[7]);
    break;
    case 9:
      lc.setRow(0,0,i[0]);
      lc.setRow(0,1,i[1]);
      lc.setRow(0,2,i[2]);
      lc.setRow(0,3,i[3]);
      lc.setRow(0,4,i[4]);
      lc.setRow(0,5,i[5]);
      lc.setRow(0,6,i[6]);
      lc.setRow(0,7,i[7]);
    break;
    case 10:
      lc.setRow(0,0,j[0]);
      lc.setRow(0,1,j[1]);
      lc.setRow(0,2,j[2]);
      lc.setRow(0,3,j[3]);
      lc.setRow(0,4,j[4]);
      lc.setRow(0,5,j[5]);
      lc.setRow(0,6,j[6]);
      lc.setRow(0,7,j[7]);
    break;
    case 11:
      lc.setRow(0,0,k[0]);
      lc.setRow(0,1,k[1]);
      lc.setRow(0,2,k[2]);
      lc.setRow(0,3,k[3]);
      lc.setRow(0,4,k[4]);
      lc.setRow(0,5,k[5]);
      lc.setRow(0,6,k[6]);
      lc.setRow(0,7,k[7]);
    break;
    case 12:
      lc.setRow(0,0,l[0]);
      lc.setRow(0,1,l[1]);
      lc.setRow(0,2,l[2]);
      lc.setRow(0,3,l[3]);
      lc.setRow(0,4,l[4]);
      lc.setRow(0,5,l[5]);
      lc.setRow(0,6,l[6]);
      lc.setRow(0,7,l[7]);
    break;
  }
  return dice;
}

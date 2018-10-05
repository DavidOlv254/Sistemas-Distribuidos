#include<iostream>
#include "PoligonoReg.h"

PoligonoReg: PoligonoReg(int nvert):ver(nvert),alpha(0){
 PoligonoIrreg p(nvert);
 alpha=360/nvert;
 Coordenada a(0,1);
 p.push_back(a);
 for(int i=1;i<nvert;i++){
  Coordenada a();
 }
}
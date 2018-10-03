#include<iostream>
#include "PoligonoIrreg.h"

class PoligonoReg: public PoligonoIrreg
{
private:
 int vert;
 double alpha;
public:
 PoligonoReg(int nvert);
 double obtenArea();
}


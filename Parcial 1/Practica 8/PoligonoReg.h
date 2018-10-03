#ifndef POLIGONORREG_H_
#define POLIGONORREG_H_
#include "Coordenada.h"
#include "PoligonoIrreg.h"
#include <iostream>
using namespace std;
class PoligonoReg : public PoligonoIrreg
{
private:
	
	double alpha;
public:
    int num_ver;
	PoligonoReg(int = 0);
	float obtieneArea();
};

#endif

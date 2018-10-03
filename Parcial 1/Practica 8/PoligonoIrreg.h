#ifndef POLIGONOIRREG_H_
#define POLIGONOIRREG_H_
#include "Coordenada.h"
#include <vector>
#include <stdlib.h>
#include <iostream>
using namespace std;
class PoligonoIrreg
{
private:
	vector<Coordenada> puntos;
	static int numVertices;
	
public:
	PoligonoIrreg();
	void anadeVertice(Coordenada ncoo);
	void imprimeVertices();
};

#endif
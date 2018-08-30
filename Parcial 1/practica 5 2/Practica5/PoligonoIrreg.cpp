
#include <iostream>
#include <vector>
#include <algorithm>
#include "PoligonoIrreg.h"

using namespace std;

PoligonoIrreg::PoligonoIrreg(double n)
{
	vct.reserve(n);
}


void PoligonoIrreg::addVertice(Coordenada a)
{
	vct.push_back(a);	
}

void PoligonoIrreg::imprimeVertices()
{
	vector <Coordenada>::iterator i;

	for (i = vct.begin(); i != vct.end(); i++)
		cout << "\nvertice: (" << (*i).obtenerX() << ", " << (*i).obtenerY() << ")";
}

bool compararCoordenadas(Coordenada a, Coordenada b)
{
	return a.getMagnitud() < b.getMagnitud();
}

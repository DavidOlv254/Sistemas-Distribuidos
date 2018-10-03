#include "PoligonoIrreg.h"
#include <iostream>
#include "Coordenada.h"
#include <vector>
#include <stdlib.h>
using namespace std;

PoligonoIrreg::PoligonoIrreg() {}



void PoligonoIrreg::imprimeVertices(){
	
	for (int i = 0; i < puntos.size() ; ++i)
	{
		cout << "puntos[ "<<i<<" ]: " <<"x = " << puntos[i].obtenerX() <<" y = " << puntos[i].obtenerY() <<endl;
	}
}

void PoligonoIrreg::anadeVertice(Coordenada ncoo){
	puntos.push_back(ncoo);
}
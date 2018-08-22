#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Coordenada.h"

using namespace std;

class Rectangulo 
{

private:
 
Coordenada superiorIzq; 
Coordenada inferiorDer;

public:
 
Rectangulo(); 
Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer);
Rectangulo(Coordenada coor1, Coordenada coor2);

void imprimeEsq();
Coordenada obtieneSupIzq();
Coordenada obtieneInfDer();
};
#endif

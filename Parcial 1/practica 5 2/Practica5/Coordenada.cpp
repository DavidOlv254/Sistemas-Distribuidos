
#include <iostream>
#include <math.h>
#include "Coordenada.h"

using namespace std;

Coordenada::Coordenada(double xx, double yy)
{
	x = xx;
	y = yy;
	magnitud = sqrt(pow(x, 2) + pow(y, 2));
}

double Coordenada::obtenerX()
{
	return x;
}

double Coordenada::obtenerY()
{
	return y;
}

double Coordenada::getMagnitud()
{
	return magnitud;
}

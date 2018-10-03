#include "Coordenada.h"
#include <math.h>
#include <iostream>
using namespace std;

Coordenada::Coordenada(double r, double a) : x(r), y(a){
}

double Coordenada::obtenerX()
{
	return x;
}
		
double Coordenada::obtenerY()
{
	return y;
}

#include <iostream>
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
	Rectangulo(Coordenada c1, Coordenada c2);
	void imprimeEsq();
	Coordenada obtieneSupIzq();
	Coordenada obtieneInfDer();
	double obtenerArea();
};

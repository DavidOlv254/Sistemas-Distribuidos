 
#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
	//c1 angulo = 85.94366926, radianes ~~ 1.4999999998283
	//c2 angulo = 11.46, radianes ~~ 0.20001473

	Rectangulo rectangulo1(Coordenada(3.605550,0.9827), Coordenada(5.0990,0.917));

	cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n";
	rectangulo1.imprimeEsq();
	
	cout << "El área del rectángulo es = " << rectangulo1.obtenerArea() << endl;
	return 0;
}


#include <stdlib.h>
#include <iostream>
#include <vector>
#include <math.h>

#include "PoligonoIrreg.h"

using namespace std;

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    double res = fMin + f * (fMax - fMin);
    return roundf(res* 1000.0) / 1000.0;
}


int main()
{
	srand(time(0));	
	int n = rand() % 20;
	PoligonoIrreg p(n);


	for(int i = 0; i < n; i++)
	{
		double x = fRand(-100, 100);
		double y = fRand(-100, 100);

		Coordenada a(x,y);
		p.addVertice(a);
	}

	cout << "Vector sin ordenar: \n\n" << endl;
	p.imprimeVertices();
	p.sortVertices();
	cout << "\n\nVector ordenado: \n\n" << endl;
	p.imprimeVertices();
	

	return 0;
}


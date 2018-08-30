
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
 static double x1=1;
	vector <PoligonoIrreg> p;
	p.reserve(n);

	for(int i = 0; i < n; i++)
	{
		double x = fRand(-100, 100);
		double y = fRand(-100, 100);

		Coordenada a(x,y);
		PoligonoIrreg p1(x1);
		p[i]=p1;
		PoligonoIrreg p1(x1);
		p1.addVertice(a);
		p.push_back(p1);//*/
	}

	cout << "tamaño del vector: "<<p.size()<<endl;
	cout<<"valor de n: "<<n<<endl;
/*	for(int i=0;i<n;i++){
		p[i].imprimeVertices();
	}*/

	return 0;
}


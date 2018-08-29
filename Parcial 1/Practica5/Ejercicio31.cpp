//reserve
#include <iostream>
#include <time.h>
#include <vector>
using namespace std; 

class Coordenada 
{
 private:
	 double x;
	 double y;
 public:
   Coordenada(double = 0, double = 0);
    double obtenerX();
    double obtenerY();
};

class PoligonoIrreg
{
 private:
	vector<Coordenada> v;
	static int numVert;
 public:
 	static int obtieneNumVert();
 	PoligonoIrreg();
 	void imprimeVertices();
 	void anadeVertice(Coordenada);
 	void anadeVertice2(Coordenada);
};

int main(){
    int n = 1000 + rand() % 15;
	int m;
	cout << n << " Poligonos" << endl;
	
	vector<PoligonoIrreg> v;
	v.reserve(n);

    for(int i=0; i<v.capacity(); i++){
		PoligonoIrreg pi;
		m  = 15 + rand() % 30;
		for(int j=0; j<m; j++){
			pi.anadeVertice(Coordenada((1+rand()%10),(1+rand()%10)));
		}
		v.push_back(pi);
	}

	/*for(int l=0; l<v.size(); l++){
		cout << "***Poligono " << l+1 << "***" << endl;
		v[l].imprimeVertices();
	}
*/
	return 0;
}

Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy) 
{ }

double Coordenada::obtenerX()
{
 return x;
}

double Coordenada::obtenerY()
{
 return y;
}

PoligonoIrreg::PoligonoIrreg()
{ }

int PoligonoIrreg::numVert = 0;

void PoligonoIrreg::imprimeVertices()
{
	for(int i=0; i< v.size(); i++)
		cout << "Vertice " << i+1 << ": (" << v[i].obtenerX() << "," << v[i].obtenerY() << ")" << endl;
}

void PoligonoIrreg::anadeVertice(Coordenada c)
{
	v.push_back(c);
	numVert++;
}

void PoligonoIrreg::anadeVertice2(Coordenada c)
{
	v.push_back(c);
	numVert++;
}


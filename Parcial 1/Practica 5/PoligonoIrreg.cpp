#include <iostream> 
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
 public:
 	PoligonoIrreg();
 	void imprimeVertices();
 	void anadeVertice(Coordenada);
};

int main(){
	PoligonoIrreg pi;
	pi.anadeVertice(Coordenada(2,3));
	pi.anadeVertice(Coordenada(3,2));
	pi.anadeVertice(Coordenada(5,9));
	pi.anadeVertice(Coordenada(9,5));
	pi.anadeVertice(Coordenada(3,7));
	pi.imprimeVertices();
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

void PoligonoIrreg::imprimeVertices()
{
	for(int i=0; i< v.size(); i++)
		cout << "Vertice " << i+1 << ": (" << v[i].obtenerX() << "," << v[i].obtenerY() << ")" << endl;
}

void PoligonoIrreg::anadeVertice(Coordenada c)
{
	v.push_back(c);
	cout << "Capacidad: " << v.capacity() << endl;
}

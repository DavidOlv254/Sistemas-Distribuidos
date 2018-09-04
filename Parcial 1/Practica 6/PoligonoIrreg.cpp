#include <iostream> 
#include <cmath>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std; 

class Coordenada 
{
 private:
	 double x;
	 double y;
	 double m;
 public:
   Coordenada(double = 0, double = 0);
    void setMagnitud(double);
    double obtenerX();
    double obtenerY();
    double obtenerM();
};

// Crear Clase PoligonoIrreg
class PoligonoIrreg
{
 private:
	vector<Coordenada> v;
 public:
 	PoligonoIrreg();
 	void imprimeVertices();
 	void anadeVertice(Coordenada);
 	void ordenaA();
};

int main(){
	PoligonoIrreg pi;
	srand(time(NULL));
	
    int n = 1 + rand() % 15;
	for(int j=0; j<n; j++){
        double x = (rand() % 200 - 100) + (rand() % 1000) / 1000.0;
       double  y = (rand() % 200 - 100) + (rand() % 1000) / 1000.0;
			pi.anadeVertice(Coordenada(x,y));
		}

	cout << "Vertices desordenados:" << endl;
	pi.imprimeVertices();
	pi.ordenaA();
	cout << "\nVertices ordenados de forma ascendente:" << endl;
	pi.imprimeVertices();
	return 0;
}

Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy) 
{ 
	const double x1=0.0, y1=0.0;
	m = sqrt((pow((x1-x),2)) + (pow((y1-y),2)));
}

double Coordenada::obtenerX()
{
 return x;
}

double Coordenada::obtenerY()
{
 return y;
}

double Coordenada::obtenerM(){
	return m;
}

//Algoritmo Sort de Ordenamiento
PoligonoIrreg::PoligonoIrreg()
{ }

bool compara(Coordenada c1, Coordenada c2){
	return (c1.obtenerM() < c2.obtenerM());
}

void PoligonoIrreg::ordenaA(){
	sort(v.begin(), v.end(), compara);
}

/*Obtener todos los elementos de un vector.
v.begin() devuelve un apuntador al primer elemento de un vector.
v.end() devuelve un apuntador al final del vector*/
void PoligonoIrreg::imprimeVertices()
{
	int cont=1;
	vector<Coordenada>::iterator i;
	for(i=v.begin(); i!=v.end(); i++){
		cout << "Vertice " << cont << ": (" << i->obtenerX() << "," << i->obtenerY() << ")" << "  Magnitud: " << i->obtenerM() << endl;
		cont++;
	}	
}
//Añade un nuevo elemento al final del vector 
void PoligonoIrreg::anadeVertice(Coordenada c)
{
	v.push_back(c);
}

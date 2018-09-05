#include <iostream>
#include <cmath>
using namespace std;

const double PI = acos(-1.0);

class Circulo
{
private:
double radio;
public:
Circulo(double = 1.0);
double calcval();
 };

Circulo::Circulo(double r) : radio(r)
{ }

double Circulo::calcval() //Calcula el área del círculo
{
return(PI * radio * radio);
} 
class Cilindro : public Circulo
{
private:
double longitud;
public:
Cilindro(double r = 1.0, double l = 1.0) : Circulo(r), longitud(l) {}
double calcval();
};

double Cilindro::calcval() //Calcula el volumen del cilindro
{
return (longitud * Circulo::calcval());
}


class Toroide : public Cilindro
{
private:
double R;
public:
Toroide(double r = 1.0, double longitud = 1.0, double R = 1.0) : Cilindro(r,longitud), R(R) {}
double calcval();
};

double Toroide::calcval() //Calcula el volumen del cilindro
{
return (R * Circulo::calcval() *2 * PI);
}



int main()
 {
Toroide toroide(2,3,5);
cout << "\nEl área del toroide es " << toroide.calcval() << endl;
return 0;
}

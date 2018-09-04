#include <stdlib.h>
#include <iostream>
using namespace std;

class Fecha 
{
private:
	int dia;
	int mes;
	int anio;
	static int vecesMuestF;
public:
	static int getVecesMuestF();
	Fecha(int = 3, int = 4, int = 2014);
	void inicializaFecha(int, int, int);
	void muestraFecha();
};

int Fecha::vecesMuestF = 0;

int Fecha::getVecesMuestF()
{
	//return vecesMuestF;
	return dia;
}

Fecha::Fecha(int dd, int mm, int aaaa)
{
	mes = mm;
	dia = dd;
    anio = aaaa;
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa)
{
    anio = aaaa;
	mes = mm;
	dia = dd;
	return;
}

void Fecha::muestraFecha()
{
	cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
	vecesMuestF++;
	return;
}

int main()
{
	Fecha a, b, c(21, 9, 2000);
	b.inicializaFecha(17, 6 , 2000);
	a.muestraFecha();
	cout << "Se ha mandado llamar muestraFecha() " << a.getVecesMuestF() << " veces\n";
	b.muestraFecha();
	cout << "Se ha mandado llamar muestraFecha() " << b.getVecesMuestF() << " veces\n";
	c.muestraFecha();
	cout << "Se ha mandado llamar muestraFecha() " << c.getVecesMuestF() << " veces\n";

 return 0;
}


#include <iostream>
using namespace std;

class Coordenada
{
	private:
		double x;
		double y;
		double magnitud;
	public:
		Coordenada(double x, double y);
		double obtenerX();
		double obtenerY();
		double getMagnitud();
};

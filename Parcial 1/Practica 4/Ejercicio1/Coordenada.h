#ifndef COORDENADA_H_
#define COORDENADA_H_

using namespace std;

class Coordenada{
  
private:

double x;    
double y;

public:
 
Coordenada(double = 0, double = 0); 
double obtenerX();
double obtenerY();
};
#endif

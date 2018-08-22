#include "Rectangulo.h"
//#include "Coordenada.h"
#include <iostream>
Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0){ }
 
Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer):superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer, yInfDer)
{ }

Rectangulo::Rectangulo(Coordenada coor1, Coordenada coor2):superiorIzq(coor1.obtenerX(), coor1.obtenerY()), inferiorDer(coor2.obtenerX(), coor2.obtenerY()){}
 
void Rectangulo::imprimeEsq() {
	cout << "Para la esquina superior izquierda.\n";
	cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;
	cout << "Para la esquina inferior derecha.\n";
	cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;   
}

 
Coordenada Rectangulo::obtieneSupIzq(){
	return superiorIzq;
}

 
Coordenada Rectangulo::obtieneInfDer() {
	return inferiorDer;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream> 
#include "Coordenada.h"
#include "PoligonoIrreg.h"
#include "PoligonoReg.h"
using namespace std;
  

int main( ){
	PoligonoReg poligono(4);
    cout<<"El numero de vertices es "<< poligono.num_ver << endl;
	cout<<"El valor del area es "<< poligono.obtieneArea()<< endl;

    poligono.PoligonoIrreg::imprimeVertices();
return 0;
} 

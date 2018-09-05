 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream> 
#include "Coordenada.h"
#include "PoligonoIrreg.h"
using namespace std;
  

int main( ){
	int n = 5;
	PoligonoIrreg poligono;
	for (int i = 0; i < n; ++i)
	{
		poligono.anadeVertice(Coordenada(4,4));
	}
	poligono.imprimeVertices();
return 0;
}  
 

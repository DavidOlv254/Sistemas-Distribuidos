#include "PoligonoReg.h"
#include "Coordenada.h"
#include "PoligonoIrreg.h"
#include <iostream>
#include <math.h> 
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415169

using namespace std;

PoligonoReg::PoligonoReg(int n) : num_ver(n){
}

float PoligonoReg::obtieneArea()
{
	alpha = 360.0/num_ver;//angulo
	float pos = 0;

    //Posiciona el vertice alrededor del circulo
    for (int i = 0; i < num_ver; ++i)
	{
		PoligonoIrreg::anadeVertice(Coordenada(cos((pos*PI)/180),sin((pos*PI)/180)));
		pos = pos + alpha;
	}
    
    //
	float a = sin(((alpha/2)*PI)/180);
	float b = cos(((alpha/2)*PI)/180);
	return (a*b)*num_ver;
	
}

#include "fecha.h"
#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>


using namespace std;
int masVieja(Fecha &fecha1, Fecha& fecha2);


Fecha::Fecha(int dd,int mm, int aaaa){
    mes=mm;
    dia=dd;
    anio=aaaa;
}
int Fecha::convierte(){
    return anio*10000+mes*100+dia;
}

int main(){
    for(int i = 0; i < 100000; i++){
        int dia = 1+rand()%(31-1);
        int mes = 1+rand()%(13-1);
        int anio = rand();
        int dia2 = 1+rand()%(31-1);
        int mes2 = 1+rand()%(13-1);
        int anio2 = rand();
        Fecha a(dia,mes,anio);
        Fecha b(dia2,mes2,anio2);
        masVieja(a,b);
    }
    Fecha a(1,4,2014);
    a.arreglo[0] = 1;
    
    cout << sizeof(a) << "\n";
    cout << sizeof(&a) << "\n";
}

int masVieja(Fecha &fecha1, Fecha& fecha2){
    if(fecha1.convierte() > fecha2.convierte())
        return 1;
    else if(fecha1.convierte() == fecha2.convierte())
        return 0;
    else
        return -1;
}

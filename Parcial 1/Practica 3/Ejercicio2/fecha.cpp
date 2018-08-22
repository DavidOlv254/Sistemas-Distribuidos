#include "fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha(int dd,int mm, int aaaa){
 mes=mm;
 dia=dd;
 anio=aaaa;
}

void Fecha::inicializarFecha(int dd,int mm, int aaaa){
 anio=aaaa;
 mes=mm;
 dia=dd;
 return;
}

void Fecha::muestraFecha(){
 cout << "la fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
 return;
}

int Fecha::convierte(){
 //int numero=
 return anio*10000+mes*100+dia;
 //return numero;
}

bool Fecha::leapyr(){
 if(anio%4==2){
  return true;
 }
 else return false;
}

int main(){
 Fecha a,b,c(21,9,1973);
 b.inicializarFecha(17,6,2002);
 a.muestraFecha();
 b.muestraFecha();
 c.muestraFecha();
 cout << "ejercicio sobre fecha b" << endl;
 cout << "fecha convertida: " << b.convierte() <<endl;
 cout << "b es año bisiesto: " << b.leapyr() <<endl;
 cout << "c es año bisiesto: " << c.leapyr() <<endl;
 
 int i=2018,cont=0;

 for(i;i>1;i--){
  if(i%4==0 && (i%100!=0 || i%400==0)){
   cont+=1;
  }
 }

 cout << "Años Bisiestos totales entre 0 y 2018: " << cont << endl;

}

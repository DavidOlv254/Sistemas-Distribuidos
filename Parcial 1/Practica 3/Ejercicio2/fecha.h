#ifndef FECHA_H_
#define FECHA_H_

class Fecha{
 private:
 int dia;
 int mes;
 int anio;
 public:
 Fecha(int=3,int=4,int=2014);
 void inicializarFecha(int,int,int);
 void muestraFecha();
 int convierte();
 int arreglo[100000];
};
#endif

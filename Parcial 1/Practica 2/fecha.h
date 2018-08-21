#ifndef FECHA_H_
#define FECHA_H_

class fecha{
private: 
 int dia;
 int mes;
 int anio;
public:
 fecha(int=3,int=4,int=2014);
 void inicializarFecha(int,int,int);
 void muestraFecha();
 int convierte();
 bool leapyr();
};
#endif
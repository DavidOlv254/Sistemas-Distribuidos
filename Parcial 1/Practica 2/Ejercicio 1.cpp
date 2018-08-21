#include <iostream>
  using namespace std;

  class Fecha
  {
  private:
     int dia;
     int mes;
     int anio;
     //int prueba=8;
 public:
    int prueba=8;
    Fecha(int = 3, int = 4, int = 2014);
    void inicializaFecha(int, int, int);
    void muestraFecha();
 };

 Fecha::Fecha(int dd, int mm, int aaaa)
 {
    mes = mm;
    dia = dd;
    anio = aaaa;
 }

 void Fecha::inicializaFecha(int dd, int mm, int aaaa)
 {
    anio = aaaa;
    mes = mm;
    dia = dd;   
    return;
}
 
 void Fecha::muestraFecha()
 {
    cout << "PRUEBA DE PRIVATE ANTES: " << prueba << endl;

/*AQUI COMIENZA EL EJERCICIO 1 IMPRIMIR*/	
	prueba ++;
	cout << "PRUEBA DE PRIVATE DESPUÉS: " << prueba << endl;
    return;   
 }

 int main()
 {
    Fecha a, b, c(21, 9, 1973);
    b.inicializaFecha(17, 6 , 2000);
    a.muestraFecha();
    b.muestraFecha();
    c.muestraFecha();   
    cout<<c.prueba<<endl;
    c.prueba++;
    cout<<c.prueba<<endl;   
 }

#include "PaqueteDatagrama.h"


PaqueteDatagrama::PaqueteDatagrama(char *cadena, unsigned int longi, char *dir, int port){
    datos=new char[longi];
    memcpy(datos, cadena, sizeof(char)*longi);
    memcpy(ip, dir, sizeof(char)*16);
    longitud = longi;
    puerto = port;
}
PaqueteDatagrama::PaqueteDatagrama(unsigned int num){
    datos = new char[num];
    longitud = num;
}

PaqueteDatagrama::~PaqueteDatagrama(){
    delete(datos);
}

char * PaqueteDatagrama::obtieneDireccion(){
    return ip;
}

unsigned int PaqueteDatagrama::obtieneLongitud(){
    return longitud;
}
int PaqueteDatagrama::obtienePuerto(){
    return puerto;
}
char *PaqueteDatagrama::obtieneDatos(){
    return datos;
}
void PaqueteDatagrama::inicializaPuerto(int port){
    puerto = port;
}
void PaqueteDatagrama::inicializaIp(char *dir){
    memcpy(ip, dir, sizeof(char)*16);
}
void PaqueteDatagrama::inicializaDatos(char *data){
    memcpy(datos, data, longitud);
}
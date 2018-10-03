#include <iostream>
#include "datagrama.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>

PaqueteDatagrama::PaqueteDatagrama(char *msj, unsigned int tam, char *ipdes,int pto){
 datos=newchar[tam];
 memcpy(msj,datos);
 memcpy(ipdes,ip);
 longitud=tam;
 puerto=pto;
}

PaqueteDatagrama::PaqueteDatagrama(unsigned int tam){
 datos=new char[tam];
 ip="0.0.0.0";
 pto=0;
 longitud=tam;
}

PaqueteDatagrama::~PaqueteDatagrama(){
 //esta madre es el destructor
 delete datos;
}

char * PaqueteDatagrama::obtieneDireccion(){
 return &ip;
}

unsigned int PaqueteDatagrama::obtieneLongitud(){
 return longitud;
}

int PaqueteDatagrama::obtienePuerto(){
 return puerto;
}

char *PaqueteDatagrama::obtieneDatos(){
 return &datos;
}

void PaqueteDatagrama::inicializaPuerto(int p){
 puerto=p;
}

void PaqueteDatagrama::inicializaIp(char *dir){
 memcpy(ip,&dir);
}

void PaqueteDatagrama::inicializaDatos(char *data){
 memcpy(datos,&data);
}
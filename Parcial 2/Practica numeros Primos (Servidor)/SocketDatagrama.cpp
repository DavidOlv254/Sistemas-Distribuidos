#include "SocketDatagrama.h"

SocketDatagrama::SocketDatagrama(int puerto) {
    s = socket(AF_INET, SOCK_DGRAM, 0);
    bzero((char *)&direccionLocal, sizeof(direccionLocal));
    direccionLocal.sin_family = AF_INET;
    direccionLocal.sin_addr.s_addr = INADDR_ANY;
    direccionLocal.sin_port = htons(puerto);
    bind(s, (struct sockaddr *)&direccionLocal, sizeof(direccionLocal));
}

SocketDatagrama::~SocketDatagrama() {
    close(s);
}

int SocketDatagrama::envia(PaqueteDatagrama &p) {
    bzero((char *)&direccionForanea, sizeof(direccionForanea));
    direccionForanea.sin_family = AF_INET;
    direccionForanea.sin_addr.s_addr = inet_addr(p.obtieneDireccion());
    direccionForanea.sin_port = htons(p.obtienePuerto());
    return sendto(s, p.obtieneDatos(), p.obtieneLongitud(), 0, (struct sockaddr *)&direccionForanea, sizeof(direccionForanea)); 
}

int SocketDatagrama::recibe(PaqueteDatagrama &p) {
    char datos[p.obtieneLongitud()];
    char aux[INET_ADDRSTRLEN];
    socklen_t clilen = sizeof(direccionForanea);
    int i = recvfrom(s, datos, p.obtieneLongitud(), 0, (struct sockaddr *) &direccionForanea, &clilen);
    inet_ntop(AF_INET, &(direccionForanea.sin_addr), aux, INET_ADDRSTRLEN);
    p.inicializaPuerto(ntohs(direccionForanea.sin_port));
    p.inicializaIp(aux);
    p.inicializaDatos(datos);
    return i;
}
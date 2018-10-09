#include "SocketDatagrama.h"

int main(int argc, char const *argv[]) {
    printf("%s\n", "SERVIDOR");
    SocketDatagrama cliente(7200);
    PaqueteDatagrama paquete(2*sizeof(double));
    int a[2];
    int num[1];
    while(1) {
        printf("\nESPERANDO...");
        printf("\nRECIBIENDO PAQUETE DE: %s:%d", paquete.obtieneDireccion(),paquete.obtienePuerto());
        printf("\nRecibidos = %d\n", cliente.recibe(paquete));
        memcpy(&a[0], paquete.obtieneDatos(), 4*sizeof(char));
        memcpy(&a[1], paquete.obtieneDatos()+(4*sizeof(char)), 4*sizeof(char));
        printf("\nRECIBIDO");

        printf("\n%d + %d", a[0], a[1]);
        num[0] = a[0] + a[1];
        printf("\nENVIANDO PAQUETE...");
        paquete.inicializaPuerto(paquete.obtienePuerto());
        paquete.inicializaIp(paquete.obtieneDireccion());
        paquete.inicializaDatos((char *)num);
        cliente.envia(paquete);
        printf("\nPAQUETE ENVIADO");
    }
    return 0;
}

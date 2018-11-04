#include "SocketDatagrama.h"

int main(int argc, char const *argv[]) {
    SocketDatagrama cliente(6666);
    int res;
    int a[2] = {7,6};
    printf("\nCLIENTE");
    printf("\nENVIANDO PAQUETE...");
    PaqueteDatagrama paquete((char *)a, 8, (char*)argv[1], 7200);
    printf("\nMANDANDO PAQUETE A: %s:%d\n", paquete.obtieneDireccion(), paquete.obtienePuerto());
    cliente.envia(paquete);
    printf("\nPAQUETE ENVIADO");
    printf("\nRECIBIENDO PAQUETE DE: %s:%d", paquete.obtieneDireccion(),paquete.obtienePuerto());
    printf("\nRECIBIDOS = %d\n", cliente.recibe(paquete));
    memcpy(&res, paquete.obtieneDatos(), 4*sizeof(char));
    printf("\nRESULTADO: %d\n", res);

    return 0;
}

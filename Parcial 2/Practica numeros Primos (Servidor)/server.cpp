 #include<iostream>
#include"socket.h"

int main(){//servidor
 SocketDatagrama *serv;
 PaqueteDatagrama *p;
 serv=new SocketDatagrama(1234);
 while(1){
  PaqueteDatagrama *ms;
  serv->recibe(*p);
  ms=new PaqueteDatagrama("Hola del servidor",17,p->obtieneDireccion(),p->obtienePuerto());
  serv->envia(*ms);
  delete ms;
 }
}
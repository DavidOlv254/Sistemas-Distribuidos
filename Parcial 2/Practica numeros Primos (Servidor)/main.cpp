#include<iostream>
#include"socket.h"

int main(){//cliente
 SocketDatagrama *cli;
 PaqueteDatagrama *p;
 p=new PaqueteDatagrama("Hola",4,"",0);
 cli=new SocketDatagrama(p.obtienePuerto());
 
 cli->envia(&p);
 cli->recibe(&p);
 delete p;
 delete cli;
 
}
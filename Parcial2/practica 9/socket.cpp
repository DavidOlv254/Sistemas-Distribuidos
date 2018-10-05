#include <iostream>
#include "socket.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>

SocketDatagrama::SocketDatagrama(int sock){
 s=sock;
}

SocketDatagrama::~SocketDatagrama(){
 close(s);
}


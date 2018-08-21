#include <stdio.h>
#include <stdlib.h>


int main(){
	int n = 2 ;
	int res;
	res = n + (++n);
    printf("El resultado es: %d\n",res);
	return 0;
}

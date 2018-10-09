#include<iostream>
#include<stdlib.h>

using namespace std; 

void primo(unsigned int);

int main(int argc, char *argv[]){
 if(argc!=2){
  printf("uso: %s numero\n",argv[0] );
  exit(0);
 }

 unsigned int numero=atoi(argv[1]);

 if(numero==(-1)){
  printf("algo malo ocurrio\n");
  exit(0);
 }

 primo(numero);

}


void primo(unsigned int n){
  int res;
 for (int i = 1; i < (n+1); ++i)
 {
  if(n%i==0){
   res++;
  }
 }
 if(res!=2){
  cout<<"es primo"<<endl;
 }else{
  cout<<"no es primo"<<endl;
 }
}
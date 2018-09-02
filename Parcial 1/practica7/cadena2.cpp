#include<iostream>
#include<time.h>
#include<cstring>
using namespace std;

void buscar(char*,int);

int main(){
 //C-string
 srand(time(NULL));
 char *cadena=NULL;
 char abc[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};//26
 int num=20000;
 int i=0,tam=4;
 char cad[4];
 cadena=(char*)malloc(sizeof(char)*4);
 for(i=0;i<num*4;i++){/*
  cad[0]=abc[rand()%26];
  cad[1]=abc[rand()%26];
  cad[2]=abc[rand()%26];
  cad[3]=abc[26];
  tam+=4;
  cadena=(char*)realloc(cadena,tam);
  strcat(cadena,cad);//*/

  if((i+1)%4==0 ){
   cadena[i]=abc[26];
   cadena=(char*)realloc(cadena,i+4);
  }else{
   cadena[i]=abc[rand()%26];
  }//*/
 }
 //cout<<cadena<<endl;
 buscar(cadena,num*4);
 free(cadena);
}

void buscar(char *cad,int tam){
 int i=0;
 int cont=0;
 while(i<tam){
  if(cad[i]=='I'){
   if(cad[i+1]=='P'){
    if(cad[i+2]=='N'){
     cont+=1;
    }
   }
  }
  i+=4;
 }
 cout<<"numero de veces que aparecio IPN: "<<cont<<endl;
}
#include <stdio.h>

#define TAMANHO 7;

int main(){
    int vet[7],indice,value;

    for(indice=0;indice<7;indice++){
        printf("digite um valor\n");
        scanf("%d",&value);
        vet[indice]=value;

    }
    
    for(indice=0;indice<7;indice++){
        printf("%d\n",vet[indice]);
    }
}
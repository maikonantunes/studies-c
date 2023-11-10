// Escreva um programa que lê 10 números reais. O programa deve imprimir a média,
// o maior e o menor dos números.

#include <stdio.h>
#define MAX 10

int main(){
    int vet[MAX],value,media,maior,menor;

    for(int i=0; i<MAX;i++){
        printf("digite o valor na posicao [%d]\n",i);
        // scanf("%d",&value);
        vet[i]=i;
    }
    for(int i=0; i<MAX;i++){
        media+=vet[i];
        printf("o valor da posicao [%d] e %d\n",i,vet[i]);
    }
    printf("o valor total dos nuemro e %d\n",media);
    media=media/MAX;
    printf("a media e %d\n",media);


}

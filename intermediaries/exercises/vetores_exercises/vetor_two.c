// gcc -o meu_programa main.c
//  Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do
// teclado, armazena os números no vetor e imprime o vetor na ordem inversa.
#include <stdio.h>
#define MAX 5

int main(){
    int vet[MAX],value;

    for(int i=0; i<MAX;i++){
        printf("digite o valor na posicao [%d]\n",i);
        scanf("%d",&value);
        vet[i]=value;
    }
    // vet[4]
    // vet[3]
    // vet[2]
    // vet[1]
    // vet[0]

    for(int i=4; i>=0;i--){
        printf("o valor da posicao [%d] e %d\n",i,vet[i]);
    }
}

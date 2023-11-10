// 8.1) Faça um programa que cria um vetor com 3 elementos inteiros, lê os 3 números do
// teclado, armazena os números em um vetor e imprime o vetor na saída padrão.
// gcc -o meu_programa main.c
#include <stdio.h>
#define MAX 3

int main(){
    int vet[MAX],value;

    for(int i=0; i<MAX;i++){
        printf("digite o valor na posicao [%d]\n",i);
        scanf("%d",&value);
        vet[i]=value;
    }
    for(int i=0; i<MAX;i++){
        printf("o valor da posicao [%d] e %d\n",i,vet[i]);
    }
}



// 8.3) Escreva um programa que lê 5 números inteiros. Após a captura dos 5 números
// mostrar os todos os 5 números na tela um ao lado do outro separados por espaços. O
// programa deve imprimir na linha abaixo o maior dos números com a seguinte frase: “O
// maior dos números acima é: <numero>”. 
// gcc -o meu_programa main.c
#include <stdio.h>
#define MAX 5

int main(){
    int vet[MAX],value,maior=vet[0];

    for(int i=0; i<MAX;i++){
        printf("digite o valor na posicao [%d]\n",i);
        scanf("%d",&value);
        vet[i]=value;
    }

    for(int i=0; i<MAX;i++){
        printf("[%d] e %d\n",i,vet[i]);

        if(vet[i]>maior){
            maior=vet[i];
        }
    }

    printf("o maior valor do vetor e %d\n",maior);


    
}
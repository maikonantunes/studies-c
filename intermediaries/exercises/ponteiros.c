#include <stdio.h>

int main(){
    int variavel=27121975;
    int *piValor;

    piValor=&variavel;

    printf("Endereco: %d\n",variavel);
    printf("Valor: %d\n",piValor);
}
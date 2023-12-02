#include <stdio.h>
// gcc -o meu_programa main.c

int main(){
    int value_one,value_two,soma,multiplicacao,subtracao,divisao,resto;
    printf("calculadora\n");

    printf("digite dois valores\n");
    printf("digite valor um\n");
    scanf("%d",&value_one);
    printf("digite valor dois\n");
    scanf("%d",&value_two);
    // = atribuicao

    //soma
    //multiplicacao
    //subtracao
    //divisao
    //resto %

    soma=value_one+value_two;
    multiplicacao=value_one*value_two;
    subtracao=value_one-value_two;
    divisao=value_one/value_two;
    resto=value_one%value_two;

    printf("resultado soma\n");
    printf("O resultado e %d\n",soma);
    printf(" resultado multiplicacao\n");
    printf("O resultado e %d\n",multiplicacao);
    printf("resultado subtracao\n");
    printf("O resultado e %d\n",subtracao);
    printf("resultado divisao\n");
    printf("O resultado e %d\n",divisao);
    printf("resultado resto\n");
    printf("O resultado e %d\n",resto);


    



   
}
// 6.8) Crie um programa que recebe números inteiros do usuário, imprime o quadrado do
// número recebido e solicita o próximo número. Caso o número informado seja zero o
// programa deve finalizar.
#include <stdio.h>



int main()
{
    int value_one, value_two,result;
    printf("digite o primeiro valor\n");
    scanf("%d", &value_one);

    do{
    printf("digite o segundo valor\n");
    scanf("%d", &value_two);
    }while (value_two==0);

    result=value_one/value_two;
    printf("o resultado da divisao e %d",result);

   
}
// gcc -o meu_programa main.c

#include <stdio.h>

int main()
{
    int number_one, number_two, result;
    printf("Digite o primeiro número\n");
    scanf("%d", &number_one);
    printf("Digite o segundo número\n");
    scanf("%d", &number_two);
    result = number_one + number_two;

    if ((result > 4) && (result < 8))
    {
        printf("Valor Maior que Quatro e Maior que Oito\n");
    }
    else if ((result > 9) && (result < 15))
    {
        printf("Valor Maior que 9 e menor que 15\n");
    }
    else if ((result > 30) || ((result < 15)))
    {
        printf("Maior que trinta ou menor que quinze \n");
    }
    else
    {
        printf("O resultado nao atende as condições");
    }


    // printf("O resultado do somatorio é %d\n",result);
}
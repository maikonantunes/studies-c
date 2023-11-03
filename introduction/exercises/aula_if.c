// Elaborar um algoritmo que, dada a idade de um nadador,
// classificá-lo nas categorias: infantil A (5 - 7 anos), infantil B (8
// -10 anos), juvenil A (11 - 13 anos), juvenil B (14 -17 anos) e
// adulto (maiores que 18 anos).

// Ler três valores e um código de condição. Se o código for “c” os
// valores devem ser escritos em ordem crescente. Se o código for
// “d”, deve-se escrevê-los em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

void crescente(int value1, int value2, int valu3)
{
}
void decrescente()
{
}

int main()
{
    int idade, value1, value2, value3;
    char codigo;

    // //problema um ok

    // // escreva
    // printf("digite sua idade\n");
    // // leia
    // scanf("%d", &idade);
    // // o valor que o usurio digitou ele é atribuido na variavel idade

    // // infantil A (5 e 7 anos),
    // // infantil B (8  - 10 anos),
    // // juvenil A (11 - 13 anos),
    // // juvenil B (14 -17 anos) e
    // // adulto (maiores que 18 anos).

    // if (idade >=5 && idade <= 7)
    // {
    //     printf("infantil A");
    // }
    // else if (idade >= 8 && idade <= 10)
    // {
    //     printf("infantil B");
    // }
    // else if (idade >= 11 && idade <= 13)
    // {
    //     printf("juvenil A");
    // }
    // else if (idade >= 14 && idade <= 17)
    // {
    //     printf("juvenil B");
    // }
    // else
    // {
    //     printf("adulto");
    // }
    printf("*** Novo Desafio ***\n");
    // problema dois
    printf("digite o codigo c para ordem crescente\n e codigo d para ordem decrescente\n");
    scanf("%c", &codigo);
    printf("\n");
    printf("digite 3 valores\n");
    scanf("%d %d %d", &value1, &value2, &value3);

    // 1 2 3
    // 3 2 1
    // 2 3 1

    switch (codigo)
    {
    case 'c':
   
        // 1 2 3
        // 1 3 2 => nao foi
        // 2 1 3
        // 2 3 2 => nao foi
        // 3 1 2
        // 3 2 1


    
        printf("crescente\n");
        if (value1 <= value2 && value2 <= value3 )
        {
            printf("%d %d %d\n", value1, value2, value3);
        }
        else if (value1 <= value3 && value3 <= value2)
        {
            printf("%d %d %d\n",  value3, value2,value1);
        }
        else if (value1 <= value3 && value3 <= value2)
        {

        }
        break;
    case 'd':
        // maior para o menor
        printf("decrescente");
        break;

    default:
        break;
    }
}

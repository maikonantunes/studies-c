// gcc -o meu_programa main.c
#include <stdio.h>

int main()
{
    int i;
    printf("digite um valor entre 1 e 3\n");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
    printf("vc digitou o valor 1");
        break;
    case 2:
    printf("vc digitou o valor 2");
        break;
    case 3:
    printf("vc digitou o valor 3");
        break;
    default:
    printf("vc digitou uma opção invalida");
        break;
    }
}
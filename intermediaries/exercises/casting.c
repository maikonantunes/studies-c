#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b)
{
    int result = a + b;
    printf("%d\n", result);
    return result;
}

int multiplicacao(int a, int b)
{
    int result = a * b;
    printf("%d\n", result);
    return result;
}
int main()
{
    int a = 1, b = 2;
    char select_type;
    printf("escolha a operacao que deseja realizar:\n '*' multiplicacao\n '+' soma\n  ");
    scanf("%c",&select_type);
    printf("digite um valor:\n");
    scanf("%d",&a);
    printf("digite um segundo valor:\n");
    scanf("%d",&b);

    switch (select_type)
    {
    case '+':
        soma(a, b);
        break;

    case '*':
        multiplicacao(a, b);
        break;

    default:
        printf("erro opção invalida");
    }
    system("pause");
}
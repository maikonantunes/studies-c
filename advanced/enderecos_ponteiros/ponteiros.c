#include <stdio.h>

void troca(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
int main()
{

    int a, b;
    printf("digite dois numeros\n");
    scanf("%d %d", &a, &b);
    printf("valores digitados %d %d\n", a, b);
    troca(&a, &b);
    printf("Os valores de a e b invertidos sao %d %d\n", a, b);
}
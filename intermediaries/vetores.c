#include <stdio.h>
#define MAX 5
int main()
{
    int vet[5], maior=vet[0];
    printf("valor %d",maior);
    for (int i = 0; i < MAX; i++)
    {
        printf("digite o valor da posicao: %d\n", i);
        scanf("%d", &vet[i]);}
   
    for (int i = 0; i < MAX; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    
    printf("\n");
    printf("O maior numero e %d", maior);
}
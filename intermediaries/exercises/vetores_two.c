#include <stdio.h>
#define MAX 10

int main()
{
    int vet[10]={1,2,54,-1,512,5,7,9,8,12}, media, maior,menor,i;

    for (i = 0; i < MAX; i++)
    {
        media += vet[i];
        printf("%d\n",maior);
        if (vet[i] > maior)
        {
            maior = vet[i];
        }else{
            menor = vet[i];
        }
    }
    media = media / 10;
    printf("média %d\n", media);
    printf("menor %d\n", menor);
    printf("maior %d\n", maior);
}
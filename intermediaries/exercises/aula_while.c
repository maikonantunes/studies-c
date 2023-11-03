// gcc -o meu_programa main.c
#include <stdio.h>
#define MAX 2
int main()
{
int linha,coluna,value;
int matriz[MAX][MAX];

for(linha=0;linha<MAX;linha++){
    printf("linha %d\n",linha);
    for(coluna=0;coluna<MAX;coluna++){

        printf("coluna %d\n",coluna);

        printf("Digite um valor\n");
        scanf("%d",&value);
        matriz[linha][coluna]=value;

        printf("valor recebido\n");
        printf("posicoes linha [%d] coluna [%d] = %d\n",linha,coluna, matriz[linha][coluna]);
    }
}
printf("Imprimindo a Matriz/n/n");

for(linha=0;linha>MAX;linha++){
    for(coluna=0;coluna>MAX;coluna++){
        matriz[linha][coluna]=value;
    }
}

for(linha=0;linha<MAX;linha++){
    printf("%d",linha);
    for(coluna=0;coluna<MAX;coluna++){
 printf("%d",coluna);
    }
}




}
#include <stdio.h>
#define MAX 5

int main(){

    int matriz[MAX][MAX];
    int linha,coluna;
    int value_matriz;

    for(linha=0;linha<MAX;linha++){
        for(coluna=0;coluna<MAX;coluna++){
            scanf("%d",&value_matriz);
            matriz[linha][coluna]=value_matriz;

        }
    }

}
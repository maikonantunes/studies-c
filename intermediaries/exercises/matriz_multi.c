#include <stdio.h>
#define DIM 2
#define DIM_COLUN 3

int main(){
    int linha,coluna;
    int aMatriz[DIM][DIM];
    for(linha=0;linha<DIM;linha++){
        for(coluna=0;coluna<DIM_COLUN;coluna++){
            printf("%d %d\n",linha+1,coluna+1);
        }
    }
}

// uma matriz é um arranjo bidimensional ou multidimensional de alocação
// estática e sequencial. A matriz é uma estrutura de dados que necessita de 
// um indice para referenciar a linha e outro para referenciar a coluna para 
// que seus elementos sejam endereçados.
// em c, um char ocupa 1 byte e um int 4 bytes
#include <stdio.h>
# define DIMENSAO 2
# define DIM_1 2
# define DIM_2 5
# define DIM_3 3
# define DIM_4 4
int main(){
    int ilinha,icoluna;
    int ivalorA;
    int aMatriz [DIMENSAO][DIMENSAO];
    int iDeterminante;
    for(ilinha=0;ilinha<DIMENSAO;ilinha++){
        for(icoluna=0;icoluna<DIMENSAO;icoluna++){
            printf("Entre item %d %d:\n",ilinha+1,icoluna+1);
            scanf("%d",&ivalorA);
            aMatriz[ilinha][icoluna]=ivalorA;

        }
    }
    iDeterminante=aMatriz[0][0]*aMatriz[1][1]-
    aMatriz[0][1]*aMatriz[1][0];
    printf ("Determinante : %d\n", iDeterminante);
}
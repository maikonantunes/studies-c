#include <stdio.h>
#define TAM 2

int main(){

int linha, coluna;
int value,matriz[TAM][TAM];

for(linha=0;linha<TAM;linha++){
    for(coluna=0;coluna<TAM;coluna++){
        scanf("%d",&value);
        matriz[linha][coluna]=value;
    }
}
// printf("******Tabela*******\n");
// for(linha=0;linha<TAM;linha++){
//     for(coluna=0;coluna<TAM;coluna++){
//         printf("[%d][%d]: %d\n",linha,coluna,matriz[linha][coluna]);

//     }
// }

}
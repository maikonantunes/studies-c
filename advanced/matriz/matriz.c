#include <stdio.h>

int main(){
    
    int matriz[2][2];

    for(int i=1; i<=2;i++){
        for(int j=1;j<=2;j++){
            printf("Digite a posição\n [%d][%d]",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n\n\n");
    printf("Imprimindo Valores\n");

     for(int i=1; i<=2;i++){
        for(int j=1;j<=2;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

}
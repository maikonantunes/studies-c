#include <stdio.h>

int main(){
    char caractere='*';
    // int i=5;
    // for(int i = 5; i<=20; i++){
    //     printf("%i\n",i);
    // }
    // puts("aquuuii\n");
    // while (i<=20)
    // {
    //     printf("%i\n",i);
    //    i++;
    // }
    //  for(int i = 20; i<=5; i--){
    //     printf("%i\n",i);
    // }
    for(int linha=1;linha<=5;linha++){
        for(int i=0;i<linha;i++){
            printf("%c",caractere);
        }
        
        printf("\n");
    }
    printf("imprimir figura abaixo");
    for(int linha=1;linha<=5;linha++){
        for(int i=0;i<linha;i++){
            
            printf("%c",caractere);
        }
        printf("\n");
    }


    
}
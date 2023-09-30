#include <stdio.h>

int main()
{
    int quotient,remainder,i;
    float t;
    float value,notas[6]={100,50,20,10,5,2};
    float moedas[6]={1,0.50,0.25,0.10,0.05,0.01};
    scanf("%f",&value);
  
    printf("NOTAS:\n");
    for(i=0;i<6;i++){
        t=value/notas[i];
        printf("%f valor",t);

        printf("%d nota(s) de %2.f \n",quotient,notas[i]);
    }
    printf("MOEDAS:\n");
    for(i=0;i<6;i++){
        printf("moedas(s) de %2.f \n",moedas[i]);
    }
}
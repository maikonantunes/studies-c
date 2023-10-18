#include <stdio.h>

int main()
{
    int temp;
    printf("\n");
    scanf("%d", &temp);
    if (temp <= 20)
    {
        printf("Frio");
    }
    else if ((temp > 20) && (temp <= 30))
    {
        printf("Agradável");
    }
    else if((temp>30) && (temp<=40)){
        printf("Quente"); 
    }
    else{
       printf("Muito Quente");  
    }
}
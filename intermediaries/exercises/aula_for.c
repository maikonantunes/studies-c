// gcc -o meu_programa main.c
#include <stdio.h>
#define MAX 10 
int main()
{

int i;
for(i=0;i<=MAX;i++){
int value=2,result;
result=value*i;
printf("o resultado da operação é: %d\n",result);
}

}
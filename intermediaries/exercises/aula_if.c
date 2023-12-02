// 5.3) Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma
// mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o
// mês em que ela nasceu).

#include <stdio.h>

int main()
{

    float value_one,value_two;

    printf("digite dois valores\n");
    scanf("%f %f",&value_one,&value_two);
    if(value_one<value_two){
        printf("O maior %2.f\n",value_two);
    }else{
         printf("O maior %2.f\n",value_one);
    }

}
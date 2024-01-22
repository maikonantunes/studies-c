#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
int idade;
char sexo[100];
char nome[100];
}Pessoa;

// 3 funcionarios
int main(){
Pessoa pessoa[3];

for(int i=1; i<=3;i++){
    printf("digite a idade do usuario\n");
    scanf("%d",&pessoa[i].idade);
    while (getchar()!='\n');
    
    printf("digite seu nome\n");
    fgets(pessoa[i].nome,100,stdin);
    printf("digite seu sexo m masculino e f feminino\n");
    fgets(pessoa[i].sexo,100,stdin);
    
   
}

printf("Meus Registros\n");

for(int i=1; i<=3;i++){
    printf("Informacaoes usuario:\n %s Idade: %d \n Sexo: %s \n\nn",pessoa[i].nome,pessoa[i].idade,pessoa[i].sexo);
}

}
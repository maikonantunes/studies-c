#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// gcc -o struct struct_one.c

typedef struct
{
    int number;
    char rua[100];
    char bairro[100];
    char cidade[100];
} Endereco;
typedef struct
{
    int idade;
    char nome[100];
    Endereco end;
} Person;

int main()
{

    // struct endereco end;
    Person person[5];
    // printf("Digite seu nome:\n");
    // fgets(person.nome,100,stdin);
    for(int i=0;i<5;i++){
        printf("digite seu nome\n");
        fgets(person[i].nome,100,stdin);
        printf("digite sua idade\n");
        scanf("%d",&person[i].idade);
        printf("digite seu endereco\n");
        printf("bairro\n");
        fgets(person[i].end.bairro,100,stdin);
        printf("rua\n");
        fgets(person[i].end.rua,100,stdin);
        printf("cidade\n");
        fgets(person[i].end.cidade,100,stdin);


    }
}
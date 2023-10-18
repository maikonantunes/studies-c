#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int print_sum(int num)
{

    printf("%d", num);
    printf("\n");
    return num;
}

void print_sum_two(int num)
{
    printf("%d", num);
    printf("\n");
}
void print_caracteres()
{
    int i;
    for (i = 0; i < 256; i++)
        printf("%i=%c\n", i, i);
}

int main()
{
    char p1[10];
    puts("Informe a palavra:");
    gets(p1);
    puts(p1);
}
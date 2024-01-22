#include <stdio.h>

int main()
{
    char ch;
    printf("digite algum caracter:\n");
    ch = getchar();
    printf("\n A tecla precionada eh %c.\n",ch);
    // outra forma de imprimir o dado recebido
    putchar(ch);
}
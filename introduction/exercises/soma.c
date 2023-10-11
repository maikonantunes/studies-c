#include <stdio.h>

int soma()
{   
    // usuario defini a entrada de dados de ae b
    int a = 1, b = 2, c;
    c = a + b;
    return c;
    // c= 1+2
    // resultado é 3
}
int main()
{
    int result;
    result = soma();
    printf("o resultado da soma é %d", result);
}
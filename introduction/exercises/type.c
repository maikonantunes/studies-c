#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%d", &c);
    printf("");
    scanf("%d", &d);
    // && => todas
    // || => alguma
    // % => resto da divisão
    if ((b > c) && (d > a) && ((c + d) > a) && ((c + d) > (c + a)) && ((c > 0) && (d > 0)) && ((a % 2 == 0)))
    {
        return printf("Valores nao aceitos");
    }
    printf("Valores aceitos");
}

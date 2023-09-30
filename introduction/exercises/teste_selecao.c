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
    if((b>c)&(d>a)&((c+d)>(a+b))&(c>=0 & d>=0)&(a%2==0)){
         printf("Valores aceitos\n");
         return 0;
    }
    printf("Valores nao aceitos\n");
}
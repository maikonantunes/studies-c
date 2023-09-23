#include <stdio.h>
#include<stdlib.h>
int main()
{
    int one, two, three, maiorAB;
    printf("");
    scanf("%d", &one);
    printf("");
    scanf("%d", &two);
    printf("");
    scanf("%d", &three);
    maiorAB = (one + two + abs(one - two)) / 2;
    if (maiorAB > three)
    {
        printf("%d eh o maior\n",maiorAB);
        return 0;
    }
    printf("%d eh o maior\n", three);
}
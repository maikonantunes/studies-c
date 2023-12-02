#include <stdio.h>
// *
// **
// ***
// ****
// *****

// ****1
// ***22
// **333
// *4444
// 55555
int main()
{
    // 1 2 3 4 5 (para números) e 4 3 2 1 0 (para *).
    // for(int linha=1; linha<=5;linha++){
    //     for(int coluna=1;coluna<linha;coluna++){
    //         printf("*");
    //     }
    //     printf("*\n");
    // }

    for (int linha = 1; linha <= 5; linha++)
    {
        for (int coluna = 5; coluna > linha; coluna--)
        {
            printf("*");
        }
        for (int number = 1; number <= linha; number++)
        {
            printf("%d",linha);
        }
        printf("\n");
    }
}
// 8.12) Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3
// elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da
// matriz.

#include <stdio.h>

int main()
{

    int vet[2][2][2];

    // x,y,z

        for (int y = 0; y < 2; y++)
        {
            for (int z = 0; z < 2; z++)
            {
                for (int x = 0; x < 2; x++)
                {
                    vet[y][z][x]=x;
                }
            }
        }

         for (int y = 0; y < 2; y++)
        {
            for (int z = 0; z < 2; z++)
            {
                for (int x = 0; x < 2; x++)
                {
                    printf("%d\n",vet[y][z][x]);
                }
            }
        }
}
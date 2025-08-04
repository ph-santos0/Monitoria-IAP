#include <stdio.h>

int main()
{
    int matriz[3][3];
    int somaColuna1 = 0, somaColuna2 = 0, somaColuna3 = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            somaColuna1 += matriz[i][0];
            somaColuna2 += matriz[i][1];
            somaColuna3 += matriz[i][2];
        }
    }

    printf("Soma da coluna 1: %d\n", somaColuna1);
    printf("Soma da coluna 2: %d\n", somaColuna2);
    printf("Soma da coluna 3: %d\n", somaColuna3);

    return 0;
}

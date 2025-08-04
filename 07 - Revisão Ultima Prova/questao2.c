#include <stdio.h>

int main()
{
    int matriz[3][3];
    int somaLinha1 = 0, somaLinha2 = 0, somaLinha3 = 0;

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
            somaLinha1 += matriz[0][j];
            somaLinha2 += matriz[1][j];
            somaLinha3 += matriz[2][j];
        }
    }

    printf("Soma da linha 1: %d\n", somaLinha1);
    printf("Soma da linha 2: %d\n", somaLinha2);
    printf("Soma da linha 3: %d\n", somaLinha3);

    return 0;
}

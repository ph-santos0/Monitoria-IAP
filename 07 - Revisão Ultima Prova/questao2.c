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
            if (i == 0)
            {
                somaLinha1 += matriz[i][j];
            }
            if (i == 1)
            {
                somaLinha2 += matriz[i][j];
            }
            if (i == 2)
            {
                somaLinha3 += matriz[i][j];
            }
        }
    }

    printf("Soma da linha 1: %d\n", somaLinha1);
    printf("Soma da linha 2: %d\n", somaLinha2);
    printf("Soma da linha 3: %d\n", somaLinha3);

    return 0;
}

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int somaPrincipal = 0, somaSecundaria = 0;

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
            if (i == j)
            {
                somaPrincipal += matriz[i][j];
            }
            if (i + j == 2)
            {
                somaSecundaria += matriz[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaSecundaria);

    return 0;
}

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int somaLinha1 = 0, somaLinha2 = 0, somaLinha3 = 0;
    int somaColuna1 = 0, somaColuna2 = 0, somaColuna3 = 0;
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
            if (i == 0)
            {
                somaLinha1 += matriz[i][j];
            }
            else if (i == 1)
            {
                somaLinha2 += matriz[i][j];
            }
            else if (i == 2)
            {
                somaLinha3 += matriz[i][j];
            }
            if (j == 0)
            {
                somaColuna1 += matriz[i][j];
            }
            else if (j == 1)
            {
                somaColuna2 += matriz[i][j];
            }
            else if (j == 2)
            {
                somaColuna3 += matriz[i][j];
            }
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

    if (somaLinha1 == somaLinha2 && somaLinha2 == somaLinha3 &&
        somaLinha3 == somaColuna1 && somaColuna1 == somaColuna2 && somaColuna2 == somaColuna3 &&
        somaColuna3 == somaPrincipal && somaPrincipal == somaSecundaria)
    {
        printf("\n%d = soma | A matriz e um quadrado magico.\n", somaLinha1);
    }
    else
    {
        printf("\n-10 | A matriz nao e um quadrado magico.\n");
    }

    return 0;
}

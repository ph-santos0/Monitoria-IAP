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
            somaLinha1 += matriz[0][j];
            somaLinha2 += matriz[1][j];
            somaLinha3 += matriz[2][j];

            somaColuna1 += matriz[i][0];
            somaColuna2 += matriz[i][1];
            somaColuna3 += matriz[i][2];

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

    if (somaLinha1 == somaLinha2 && somaLinha2 == somaLinha3 && somaColuna1 == somaColuna2 && somaColuna2 == somaColuna3 && somaPrincipal == somaSecundaria)
    {
        printf("%d = soma e a matriz e um quadrado magico.\n", somaLinha1 / 3); // divide por 3 pois a matriz soma 3 vezes no for
    }
    else
    {
        printf("-10, A matriz nao e um quadrado magico.\n");
    }

    return 0;
}


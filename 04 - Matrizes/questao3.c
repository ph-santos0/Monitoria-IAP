#include <stdio.h>

int main()
{
    int m[8][8], somaP = 0, somaS = 0;

    printf("Matriz:\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i + j == 8)
            {
                m[i][j] = (i * i) + (j * j) + 2;
            }
            else if (i + j > 8)
            {
                m[i][j] = j + 4;
            }
            else if (i + j < 8)
            {
                m[i][j] = 3 * i + j;
            }

            printf("%d ", m[i][j]);

            if (i == j)
            {
                somaP += m[i][j];
            }
            if (i + j == 8 - 1)
            {
                somaS += m[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", somaP);
    printf("Soma da diagonal secundaria: %d\n", somaS);
    printf("Multiplicacao das diagonais: %d\n", somaP * somaS);
}
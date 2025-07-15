#include <stdio.h>

int main()
{
    int m[8][8], soma = 0;

    printf("Matriz 8x8:\n");

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            m[i][j] = 2;

            if (i < j)
            {
                m[i][j] = 1;
                soma += m[i][j];
            }

            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos acima da diagonal principal: %d\n", soma);
}
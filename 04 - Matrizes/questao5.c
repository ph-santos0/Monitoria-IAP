#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[6][6], soma = 0;

    printf("Matriz 6x6:\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            m[i][j] = rand() % 50 + 1;

            if (i >= j)
            {
                m[i][j] = 1;
                soma += m[i][j];
            }

            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos abaixo da diagonal principal (contando a diagonal): %d\n", soma);
}
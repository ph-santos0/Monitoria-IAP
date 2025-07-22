#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5], soma = 0;

    printf("Matriz 5x5 aleatoria:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            m[i][j] = rand() % 50 + 1;
            printf("%d ", m[i][j]);
            if (i == j)
            {
                soma += m[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", soma);
}
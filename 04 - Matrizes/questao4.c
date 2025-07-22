#include <stdio.h>

int main()
{
    int a[3][5], b[3][5], c[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = 1;
            b[i][j] = 2;
        }
    }

    printf("Matriz A 3x5:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B 3x5:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C de soma das matrizes:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
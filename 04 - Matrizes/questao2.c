#include <stdio.h>

int main()
{
    int m[8][8];

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
        }
        printf("\n");
    }
}
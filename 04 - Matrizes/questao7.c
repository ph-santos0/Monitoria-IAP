#include <stdio.h>

int main()
{
    int m[3][3];
    double somatotal = 0, media;
    int somacoluna1 = 0, produtolinha1 = 1, cont = 1;

    printf("Matriz 3x3:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = cont++;
            printf("%d ", m[i][j]);

            if (j == 0)
                somacoluna1 += m[i][j];
            if (i == 0)
                produtolinha1 *= m[i][j];

            somatotal += m[i][j];
        }
        printf("\n");
    }

    media = somatotal / (3 * 3);

    printf("\nA) Soma da 1a coluna: %d\n", somacoluna1);
    printf("B) Produto da 1a linha: %d\n", produtolinha1);
    printf("C) Soma total da matriz: %.0f\n", somatotal);
    printf("D) Media dos elementos da matriz: %.2lf\n", media);
}
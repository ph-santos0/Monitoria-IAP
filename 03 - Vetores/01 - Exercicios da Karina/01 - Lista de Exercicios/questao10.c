#include <stdio.h>

int main()
{
    float A[5], B[5], X;

    printf("Digite 5 valores para o vetor A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    printf("\nDigite um valor para X: ");
    scanf("%f", &X);

    int encontrado = 0;
    for (int i = 0; i < 5; i++)
    {
        if (A[i] == X)
        {
            printf("O valor X = %.0f foi encontrado na posicao %d do vetor A.\n", X, i);
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("O valor X = %f nao foi encontrado no vetor A.\n", X);
    }

    printf("\nVetor B (A[i] / X):\n");
    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i] / X;
        printf("B[%d] = %.2f\n", i, B[i]);
    }
}
#include <stdio.h>

int main()
{
    int A[5], B[5], C[10];

    printf("Digite 5 valores inteiros para o vetor A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 5 valores inteiros para o vetor B:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Intercalando (2*i = pares | 2*i+1 = impares)
    for (int i = 0; i < 5; i++)
    {
        C[i * 2] = A[i];
        C[i * 2 + 1] = B[i];
    }

    printf("\nVetor C (intercalado):\n");
    for (int i = 0; i < 10; i++)
    {
        printf("C[%d] = %d\n", i, C[i]);
    }
}
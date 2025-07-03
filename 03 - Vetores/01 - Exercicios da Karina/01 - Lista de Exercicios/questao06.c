#include <stdio.h>

int main()
{
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];

    printf("\nDigite os %d numeros do vetor:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem inversa:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
}
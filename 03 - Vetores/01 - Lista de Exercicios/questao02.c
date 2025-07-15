#include <stdio.h>

int main()
{
    int vetor[3];

    printf("Insira os 3 numeros do vetor:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Impares:\n");
    for (int i = 0; i < 3; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("Posicao %d: %d\n", i, vetor[i]);
        }
    }
}
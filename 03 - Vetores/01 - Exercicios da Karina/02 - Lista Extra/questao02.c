#include <stdio.h>

int main()
{
    int vetor[5], i, maior, menor, posMaior = 0, posMenor = 0;

    printf("Preencha o vetor de 5 elementos:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posMaior = i;
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posMenor = i;
        }
    }

    printf("\nMaior valor: %d | Posicao: %d\n", maior, posMaior);
    printf("Menor valor: %d | Posicao: %d\n", menor, posMenor);

    return 0;
}

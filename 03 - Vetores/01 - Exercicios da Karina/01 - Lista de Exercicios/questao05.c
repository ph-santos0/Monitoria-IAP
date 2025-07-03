#include <stdio.h>

int main()
{
    int x[8], y[8], w[4], indicey = 0, indicew = 0;

    printf("Digite 8 elementos para o vetor X:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &x[i]);
        if (x[i] > 10 && x[i] < 40)
        {
            y[indicey] = x[i];
            indicey++;
        }
        if (i % 2 == 0)
        {
            w[indicew] = x[i];
            indicew++;
        }
    }

    printf("\nVetor Y de numeros do vetor X que estao entre 10 e 40:\n");
    for (int i = 0; i < indicey; i++)
    {
        printf("Posicao %d: %d\n", i, y[i]);
    }

    printf("\nVetor W de numeros nas posicoes pares do vetor X:\n");
    for (int i = 0; i < indicew; i++)
    {
        printf("Posicao %d: %d\n", i, w[i]);
    }
}
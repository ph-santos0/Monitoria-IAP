#include <stdio.h>

int main()
{
    int vetor[5];
    float soma = 0, media;

    printf("Preencha o vetor de 5 elementos:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    media = soma / 5;

    printf("\nValores maiores que a media (%.2f):\n", media);
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > media)
        {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}

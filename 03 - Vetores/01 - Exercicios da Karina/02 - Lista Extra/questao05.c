#include <stdio.h>

int main()
{
    int vetor[5], maiores = 0, menores = 0, iguais = 0;

    printf("Preencha o vetor de 5 elementos:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 1; i < 5; i++)
    {
        if (vetor[i] > vetor[0])
        {
            maiores++;
        }
        else if (vetor[i] < vetor[0])
        {
            menores++;
        }
        else
        {
            iguais++;
        }
    }

    printf("\nQuantidade de maiores que o primeiro elemento: %d\n", maiores);
    printf("Quantidade de menores que o primeiro elemento: %d\n", menores);
    printf("Quantidade de iguais ao primeiro elemento: %d\n", iguais);

    return 0;
}

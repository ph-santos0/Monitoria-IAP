#include <stdio.h>

int main()
{
    int n;
    printf("Digite o numero de elementos dos vetores x e y: ");
    scanf("%d", &n);
    int x[n], y[n], produtoEscalar = 0;

    printf("\nDigite os elementos do vetor x:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &x[i]);
    }

    printf("\nDigite os elementos do vetor y:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &y[i]);
        produtoEscalar = produtoEscalar + x[i] * y[i];
    }

    printf("\nO produto escalar dos vetores e: %d", produtoEscalar);
}
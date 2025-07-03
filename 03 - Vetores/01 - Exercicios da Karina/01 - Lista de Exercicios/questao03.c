#include <stdio.h>

int main()
{
    int a[6], m[6], x;

    printf("Insira os 6 numeros do vetor:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nInsira um valor para multiplicar: ");
    scanf("%d", &x);

    printf("\nVetor resultado:\n");
    for (int i = 0; i < 6; i++)
    {
        m[i] = a[i] * x;
        printf("Posicao %d: %d\n", i, m[i]);
    }
}
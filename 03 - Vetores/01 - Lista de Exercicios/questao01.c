#include <stdio.h>

int main()
{
    int v1[3], v2[3], v3[3];

    printf("Insira os 3 numeros do primeiro vetor:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &v1[i]);
    }

    printf("Insira os 3 numeros do segundo vetor:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &v2[i]);
    }

    printf("Soma dos vetores:\n");
    for (int i = 0; i < 3; i++)
    {
        v3[i] = v1[i] + v2[i];
        printf("Posicao %d: %d\n", i, v3[i]);
    }
}
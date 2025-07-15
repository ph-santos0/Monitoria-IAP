#include <stdio.h>

int main()
{
    float notas[5], soma = 0;

    printf("Digite 5 notas:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    printf("Notas maiores que a media da turma:\n");
    for (int i = 0; i < 5; i++)
    {
        if (notas[i] > soma / 5)
        {
            printf("Posicao %d: %.2f\n", i, notas[i]);
        }
    }
}
#include <stdio.h>

int main()
{
    float velocidade_maxima, velocidade_veiculo, excesso;

    printf("Digite a velocidade maxima permitida (km/h): ");
    scanf("%f", &velocidade_maxima);

    printf("Digite a velocidade do veiculo (km/h): ");
    scanf("%f", &velocidade_veiculo);

    excesso = velocidade_veiculo - velocidade_maxima;

    if (excesso <= 0)
    {
        printf("Sem multa.\n");
    }
    else if (excesso <= 10)
    {
        printf("Multa leve.\n");
    }
    else if (excesso <= 20)
    {
        printf("Multa grave.\n");
    }
    else
    {
        printf("Multa gravissima.\n");
    }

    return 0;
}

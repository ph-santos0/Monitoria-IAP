#include <stdio.h>

int main()
{
    float temp[7], soma = 0, media;
    int acimaMedia = 0;

    printf("Digite a temperatura dos 7 dias:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma = soma + temp[i];
    }

    media = soma / 7;

    for (int i = 0; i < 7; i++)
    {
        if (temp[i] > media)
        {
            acimaMedia++;
        }
    }

    printf("Temperatura media da semana: %.2f\n", media);
    printf("Numero de dias com temperatura acima da media: %d\n", acimaMedia);

    return 0;
}

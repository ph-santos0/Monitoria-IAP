#include <stdio.h>

int main()
{
    struct Onibus
    {
        int numero;
        int qtdCidades;
        int codCidades[5];
        float distancias[5];
    };

    struct Onibus onibus[10];

    printf("Insira os dados dos dez onibus:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nOnibus %d\n", i + 1);
        printf("Numero do onibus: ");
        scanf("%d", &onibus[i].numero);

        printf("Quantidade de cidades percorridas (maximo 5): ");
        scanf("%d", &onibus[i].qtdCidades);

        float soma = 0;
        for (int j = 0; j < onibus[i].qtdCidades; j++)
        {
            printf("Codigo da cidade %d: ", j + 1);
            scanf("%d", &onibus[i].codCidades[j]);
            printf("Distancia ate essa cidade (km): ");
            scanf("%f", &onibus[i].distancias[j]);
            soma += onibus[i].distancias[j];
        }
        printf("Onibus %d percorreu %.2f km\n", onibus[i].numero, soma);
    }

    return 0;
}

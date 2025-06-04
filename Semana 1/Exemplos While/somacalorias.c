#include <stdio.h>

int main()
{
    int prato = 1, soma = 0;

    while (prato != 0)
    {

        printf("Cardapio\n");
        printf("1. Prato 1\n");
        printf("2. Prato 2\n");
        printf("3. Prato 3\n");
        printf("4. Prato 4\n");
        printf("0. Sair\n");

        printf("\nEscolha a opção: ");
        scanf("%d", &prato);

        switch (prato)
        {
        case 1:
            prato = 180;
            break;
        case 2:
            prato = 200;
            break;
        case 3:
            prato = 250;
            break;
        case 4:
            prato = 280;
            break;
        }

        soma = soma + prato;

        if (prato != 0)
        {
            printf("O prato selecionado tem %d calorias.\n", prato);
        }
    }

    printf("O total de calorias e %d", soma);

    return 0;
}
#include <stdio.h>

int main()
{
    int prato;

    printf("Cardapio\n");
    printf("1. Prato 1\n");
    printf("2. Prato 2\n");
    printf("3. Prato 3\n");
    printf("4. Prato 4\n");

    printf("\nEscolha o prato para verificar calorias: ");
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

    printf("O prato selecionado tem %d calorias.", prato);

    return 0;
}

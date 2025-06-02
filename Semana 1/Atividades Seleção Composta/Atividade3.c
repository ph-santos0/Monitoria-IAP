#include <stdio.h>

int main()
{
    printf("Cardapio\n");
    printf("1. Prato 1\n");
    printf("2. Prato 2\n");
    printf("1. Prato 3\n");
    printf("1. Prato 4\n");

    printf("\nEscolha o prato para verificar calorias: ");
    int num;
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\n180 calorias.\n");
        break;
    case 2:
        printf("\n230 calorias.\n");
        break;
    case 3:
        printf("\n250 calorias.\n");
        break;
    case 4:
        printf("\n350 calorias.\n");
        break;
    }
    return 0;
}
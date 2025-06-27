#include <stdio.h>

int main()
{
    int num, impares = 0;

    do
    {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        if (num != 0 && num % 2 != 0)
        {
            impares = impares + 1;
        }
    } while (num != 0);

    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
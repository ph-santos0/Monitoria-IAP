#include <stdio.h>

int main()
{
    int n, cont, qtd = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Divisores de %d: ", n);
    for (cont = 1; cont <= n; cont++)
    {
        if (n % cont == 0)
        {
            printf("%d ", cont);
            qtd = qtd + 1;
        }
    }

    printf("\nQuantidade de divisores: %d\n", qtd);

    return 0;
}
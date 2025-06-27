#include <stdio.h>

int main()
{
    int n, cont, qtd = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (cont = 1; cont <= n; cont++)
    {
        if (n % cont == 0)
        {
            qtd = qtd + 1;
        }
    }

    if (qtd == 2)
    {
        printf("%d e primo.\n", n);
    }
    else
    {
        printf("%d nao e primo.\n", n);
    }

    return 0;
}
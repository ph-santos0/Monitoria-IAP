#include <stdio.h>

int main()
{
    int n;
    int fatorial = 1;
    int i;

    printf("Digite um numero inteiro nao negativo para calcular o fatorial: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    printf("O fatorial de %d (%d!) eh: %lld\n", n, n, fatorial);

    return 0;
}

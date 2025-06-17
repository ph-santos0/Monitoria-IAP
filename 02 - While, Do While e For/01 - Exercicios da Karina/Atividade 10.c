#include <stdio.h>

int main()
{
    int n;
    int fatorial = 1;
    int cont;

    printf("Digite um numero inteiro positivo para calcular o fatorial: ");
    scanf("%d", &n);

    for (cont = n; cont >= 1; cont--)
    {
        fatorial = fatorial * cont;
    }
    printf("O fatorial eh: %d\n", fatorial);

    return 0;
}

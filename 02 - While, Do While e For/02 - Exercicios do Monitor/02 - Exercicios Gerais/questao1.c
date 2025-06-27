#include <stdio.h>

int main()
{
    int inicio, fim, cont;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    for (cont = inicio; cont <= fim; cont++)
    {
        printf("%d\n", cont);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int X, Y;

    X = 1;
    Y = 5;
    printf("Valores iniciais: X = %d, Y = %d\n\n", X, Y);

    printf("Execucao do loop while (X < Y):\n");
    while (X < Y)
    {
        X = X + 2;
        Y = Y + 1;
        printf("Novo loop: X = %d, Y = %d\n", X, Y);
    }
    printf("\nFim dos loops\n");

    return 0;
}
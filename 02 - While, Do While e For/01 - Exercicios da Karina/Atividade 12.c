#include <stdio.h>
#include <math.h>

int main()
{
    float cont, soma = 0;

    for (cont = 1; cont <= 11; cont++)
    {
        soma = soma + cont/pow(cont, 2);
    }

    printf("%f", soma);

    return 0;
}

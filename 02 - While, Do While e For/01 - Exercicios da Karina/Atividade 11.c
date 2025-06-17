#include <stdio.h>
#include <math.h>

int main()
{
    float cont, soma = 0;

    for (cont = 1; cont <= 20; cont++)
    {
        soma = soma + cont/pow(cont*2, 2);
    }

    printf("%f", soma);

    return 0;
}

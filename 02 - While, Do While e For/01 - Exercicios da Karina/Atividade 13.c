#include <stdio.h>
#include <math.h>

int main()
{
    float cont, soma = 0, numerador = 2, denominador = 17;

    for (cont = 0; cont < 8; cont++)
    {
        soma = soma + (numerador/denominador);
        numerador = numerador + 2;
        denominador = denominador - 2;
    }

    printf("%f", soma);

    return 0;
}

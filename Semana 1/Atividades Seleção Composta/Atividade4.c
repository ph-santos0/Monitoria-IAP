#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double delta;
    double raiz1, raiz2;

    printf("Calculadora de Equacao do 2o Grau\n");
    printf("Formato: ax^2 + bx + c = 0\n\n");

    printf("Digite o valor de A: ");
    scanf("%lf", &a);

    printf("Digite o valor de B: ");
    scanf("%lf", &b);

    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("\nNao e uma equacao do 2o grau (o valor de A nao pode ser zero).\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    printf("\nResultado\n");
    if (delta > 0)
    {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao possui 2 raizes reais:\n");
        printf("Raiz 1 (x'): %.2lf\n", raiz1);
        printf("Raiz 2 (x''): %.2lf\n", raiz2);
    }
    else if (delta == 0)
    {
        raiz1 = -b / (2 * a);
        printf("A equacao possui apenas uma raiz real:\n");
        printf("Raiz (x'): %.2lf\n", raiz1);
    }
    else
    {
        printf("A equacao nao tem raizes reais (Delta < 0).\n");
    }

    return 0;
}
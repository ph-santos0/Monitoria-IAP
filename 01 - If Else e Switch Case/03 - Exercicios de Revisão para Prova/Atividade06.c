#include <stdio.h>

int main()
{
    int lado1, lado2, lado3;

    printf("Digite os tres lados do triangulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("Triangulo Equilatero\n");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("Triangulo Isosceles\n");
    }
    else
    {
        printf("Triangulo Escaleno\n");
    }

    return 0;
}

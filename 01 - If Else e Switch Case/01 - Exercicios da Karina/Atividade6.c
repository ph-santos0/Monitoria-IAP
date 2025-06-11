#include <stdio.h>

int main()
{
    float num1, num2, num3, num4;
    float menor;

    printf("Menor de 4 numeros\n");
    printf("Por favor, digite 4 numeros DIFERENTES.\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    printf("Digite o quarto numero: ");
    scanf("%f", &num4);

    menor = num1;

    if (num2 < menor)
    {
        menor = num2;
    }

    if (num3 < menor)
    {
        menor = num3;
    }

    if (num4 < menor)
    {
        menor = num4;
    }

    printf("\nO menor numero digitado e: %.2lf\n", menor);

    return 0;
}
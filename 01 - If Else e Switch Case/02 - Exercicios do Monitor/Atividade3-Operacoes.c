#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%f", &num2);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("Resultado da soma: %f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado da subtracao: %f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado da multiplicacao: %f\n", resultado);
        break;
    case 4:
        if (num2 != 0)
        {
            resultado = num1 / num2;
            printf("Resultado da divisao: %f\n", resultado);
        }
        else
        {
            printf("Erro: divisao por zero nao e permitida.\n");
        }
        break;
    default:
        printf("Opcao invalida.\n");
    }

    return 0;
}

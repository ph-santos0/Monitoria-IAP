#include <stdio.h>

int main()
{
    float horas, salarioHora, salarioTotal;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor por hora: R$ ");
    scanf("%f", &salarioHora);

    if (horas > 160)
    {
        salarioTotal = 160 * salarioHora + (horas - 160) * salarioHora * 2;
    }
    else
    {
        salarioTotal = horas * salarioHora;
    }

    printf("Salario total: R$ %.2f\n", salarioTotal);

    return 0;
}

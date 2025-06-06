#include <stdio.h>

int main()
{
    float salario_bruto, bonus, salario_final;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 1500)
    {
        bonus = salario_bruto * 0.15;
    }
    else if (salario_bruto <= 3000)
    {
        bonus = salario_bruto * 0.10;
    }
    else
    {
        bonus = salario_bruto * 0.05;
    }

    salario_final = salario_bruto + bonus;

    printf("Bonus: R$ %.2f\n", bonus);
    printf("Salario final com bonus: R$ %.2f\n", salario_final);

    return 0;
}

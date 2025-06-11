#include <stdio.h>

int main() {
    int cargo, i = 0;
    float salarioBruto, salarioLiquido, desconto, gratificacao;

    while (i < 3) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("Digite o cargo (1-Motorista, 2-Chefe, 3-Diretor): ");
        scanf("%d", &cargo);
        printf("Digite o salario bruto: R$ ");
        scanf("%f", &salarioBruto);

        desconto = salarioBruto * 0.07;
        salarioLiquido = salarioBruto - desconto;

        if (cargo == 1) {
            gratificacao = salarioLiquido * 0.10;
            salarioLiquido += gratificacao;
        }

        printf("Salario liquido do funcionario %d: R$ %.2f\n", i + 1, salarioLiquido);
        i++;
    }

    return 0;
}
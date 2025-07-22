#include <stdio.h>

int main()
{
    struct Funcionario
    {
        char nome[50];
        float salario;
        float ht[3], soma;
    };

    struct Funcionario funcionarios[3];

    printf("Insira os dados dos tres funcionarios:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %s", funcionarios[i].nome);
        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);
        funcionarios[i].soma = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Horas trabalhadas HT%d: ", j + 1);
            scanf("%f", &funcionarios[i].ht[j]);

            funcionarios[i].soma += funcionarios[i].ht[j];
        }
    }

    printf("\nSoma de horas dos funcionarios com salario entre R$1000 e R$2000:\n");
    for (int i = 0; i < 3; i++)
    {
        if (funcionarios[i].salario >= 1000 && funcionarios[i].salario <= 2000)
        {
            printf("%s: %.2f horas\n", funcionarios[i].nome, funcionarios[i].soma);
        }
    }

    return 0;
}

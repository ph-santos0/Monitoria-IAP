#include <stdio.h>

int main()
{
    struct Aluno
    {
        int matricula;
        int idade;
        int sexo;
        float notas[3];
        float notaFinal;
    };

    struct Aluno alunos[2];

    printf("Insira os dados dos dois alunos:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Sexo (1-Feminino, 2-Masculino): ");
        scanf("%d", &alunos[i].sexo);

        float soma = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }

        alunos[i].notaFinal = soma / 3.0;

        if (alunos[i].notaFinal >= 6.0)
        {
            printf("Aluno %d aprovado com media %.2f\n", i + 1, alunos[i].notaFinal);
        }
        else
        {
            printf("Aluno %d reprovado com media %.2f\n", i + 1, alunos[i].notaFinal);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i = 0;
    int sexo, temComputador;
    int femComPC = 0;
    int totalComPC = 0;
    int totalAlunos = 5;

    printf("Pesquisa sobre posse de computador (5 alunos):\n");

    while (i < totalAlunos) {
        printf("\nAluno %d:\n", i + 1);
        printf("Sexo (1-Feminino, 2-Masculino): ");
        scanf("%d", &sexo);
        printf("Possui computador em casa? (1-Sim, 0-Nao): ");
        scanf("%d", &temComputador);

        if (temComputador == 1) {
            totalComPC++;
            if (sexo == 1) {
                femComPC++;
            }
        }
        i++;
    }

    float porcentagemComPC = 0;
    if (totalAlunos > 0) {
        porcentagemComPC = (float)totalComPC / totalAlunos * 100.0;
    }

    printf("\nResultados da Pesquisa:\n");
    printf("Quantidade de alunas do sexo feminino que possuem computador: %d\n", femComPC);
    printf("Porcentagem de alunos em geral que possuem computador: %.2f%%\n", porcentagemComPC);

    return 0;
}
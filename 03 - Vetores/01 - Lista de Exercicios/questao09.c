#include <stdio.h>

int main()
{
    char gabarito[3], respostas[3];
    int numAlunos, RA;

    printf("Insira o gabarito das 3 questoes da prova (A a E):\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%da questao: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    printf("Insira o numero de alunos: ");
    scanf("%d", &numAlunos);

    for (int i = 0; i < numAlunos; i++)
    {
        printf("\nRA do aluno: ");
        scanf("%d", &RA);

        int acertos = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Resposta da %da questao: ", j + 1);
            scanf(" %c", &respostas[j]);
            if (respostas[j] == gabarito[j])
            {
                acertos++;
            }
        }

        printf("Aluno %d acertou %d questao(oes).\n", RA, acertos);
    }
}
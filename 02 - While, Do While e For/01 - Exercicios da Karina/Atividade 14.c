#include <stdio.h>

int main()
{
    int cont = 0, possui, sexo;
    float geral = 0, mulheres = 0;

    while (cont < 5)
    {
        printf("Possui computador?\n 1 - Sim\n 2 - Nao\n");
        scanf("%d", &possui);
        printf("Selecione:\n 1 - Feminino\n 2 - Masculino\n");
        scanf("%d", &sexo);

        if (possui == 1)
        {
            geral = geral + 1;
        }
        if (possui == 1 && sexo == 1)
        {
            mulheres = mulheres + 1;
        }
        cont++;
    }
    printf("Quantidade de mulheres com computador: %f\n", mulheres);
    printf("Porcentagem de alunos com computador: %.2f", (geral / 5) * 100);
}

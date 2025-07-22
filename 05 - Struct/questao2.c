#include <stdio.h>

int main()
{
    struct Pessoa
    {
        int sexo;
        float altura;
        float peso;
    };

    struct Pessoa p[2];

    printf("Insira os dados das duas pessoas:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\nPessoa %d\n", i + 1);
        printf("Sexo (1-Feminino, 2-Masculino): ");
        scanf("%d", &p[i].sexo);
        printf("Altura em metros: ");
        scanf("%f", &p[i].altura);
        printf("Peso em kg: ");
        scanf("%f", &p[i].peso);

        if (p[i].altura >= 1.65 && p[i].altura <= 1.75 && p[i].peso >= 60 && p[i].peso <= 80)
        {
            printf("Pessoa %d aprovada\n", i + 1);
        }
        else
        {
            printf("Pessoa %d reprovada\n", i + 1);
        }
    }

    return 0;
}

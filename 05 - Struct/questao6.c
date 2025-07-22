#include <stdio.h>
#include <string.h>

int main()
{
    struct Pessoa
    {
        char nome[50];
        int sexo;
        int respostas[5];
    };

    struct Pessoa pessoas[20];

    int musica_estudante = 0, gostam_futebol = 0, danca_esporte = 0;

    printf("Insira os dados das vinte pessoas:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %s", pessoas[i].nome);
        printf("Sexo (1-Feminino, 2-Masculino): ");
        scanf("%d", &pessoas[i].sexo);

        printf("Responda com 1 (sim) ou 2 (nao):\n");
        printf("Gosta de ouvir musica? ");
        scanf("%d", &pessoas[i].respostas[0]);
        printf("Pratica algum esporte? ");
        scanf("%d", &pessoas[i].respostas[1]);
        printf("Ainda e estudante? ");
        scanf("%d", &pessoas[i].respostas[2]);
        printf("Gosta de futebol? ");
        scanf("%d", &pessoas[i].respostas[3]);
        printf("Gosta de dancar? ");
        scanf("%d", &pessoas[i].respostas[4]);

        // a) Música + estudante
        if (pessoas[i].respostas[0] == 1 && pessoas[i].respostas[2] == 1)
            musica_estudante++;

        // b) Futebol
        if (pessoas[i].respostas[3] == 1)
            gostam_futebol++;

        // c) Dança + esporte
        if (pessoas[i].respostas[4] == 1 && pessoas[i].respostas[1] == 1)
            danca_esporte++;
    }

    printf("\nResultados da pesquisa:\n");
    printf("a) Pessoas que gostam de musica e sao estudantes: %d\n", musica_estudante);
    printf("b) Porcentagem que gostam de futebol: %.2f%%\n", (float)gostam_futebol / 20 * 100);
    printf("c) Pessoas que gostam de dancar e praticam esporte: %d\n", danca_esporte);

    return 0;
}

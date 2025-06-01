#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char tabuleiro[3][3];
char nome1[50], nome2[50];
int jogador = 1;
int contador = 0;
int p1win = 0, p2win = 0, empate = 0;

void jogo();
void fimjogo();

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    system("cls");
    printf("Jogo da Velha\n\n");
    printf("Esse será o modelo do tabuleiro, utilize a tecla de acordo com a casa desejada.\n\n");
    printf(" 1 | 2 | 3\n");
    printf("-----------\n");
    printf(" 4 | 5 | 6\n");
    printf("-----------\n");
    printf(" 7 | 8 | 9\n\n");

    printf("Insira o nome do jogador 1 (X): ");
    scanf("%s", nome1);
    printf("Insira o nome do jogador 2 (O): ");
    scanf("%s", nome2);

    p1win = 0;
    p2win = 0;
    empate = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';

    jogo();
    return 0;
}

void jogo()
{
    system("cls");
    printf("Jogo da Velha\n\n");
    printf("Vitorias de %s: %d\n", nome1, p1win);
    printf("Vitorias de %s: %d\n", nome2, p2win);
    printf("Empates: %d\n\n", empate);

    for (int i = 0; i < 3; i++)
    {
        printf(" ");
        for (int j = 0; j < 3; j++)
        {
            printf("%c", tabuleiro[i][j]);
            if (j < 2)
                printf(" | ");
        }
        printf("\n");
        if (i < 2)
            printf("-----------\n");
    }

    printf("\n%s, insira a posição que deseja jogar (1-9): ", jogador ? nome1 : nome2);

    char jogada;
    fflush(stdin);
    scanf(" %c", &jogada);

    if (jogada < '1' || jogada > '9')
    {
        printf("\nJogada inválida, digite um numero entre 1 e 9!\n\n");
        system("pause");
        jogo();
        return;
    }

    int linha = (jogada - '1') / 3;
    int coluna = (jogada - '1') % 3;

    if (tabuleiro[linha][coluna] != ' ')
    {
        printf("\nJogada inválida, você escolheu uma casa ocupada!\n\n");
        system("pause");
        jogo();
        return;
    }

    tabuleiro[linha][coluna] = jogador ? 'X' : 'O';
    contador++;
    jogador = !jogador;

    char vencedor = ' ';
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
            vencedor = tabuleiro[i][0];
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
            vencedor = tabuleiro[0][i];
    }
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
        vencedor = tabuleiro[0][0];
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
        vencedor = tabuleiro[0][2];

    if (vencedor != ' ')
    {
        system("cls");
        printf("Jogo da Velha\n\n");
        printf("Vitorias de %s: %d\n", nome1, p1win);
        printf("Vitorias de %s: %d\n", nome2, p2win);
        printf("Empates: %d\n\n", empate);

        for (int i = 0; i < 3; i++)
        {
            printf(" ");
            for (int j = 0; j < 3; j++)
            {
                printf("%c", tabuleiro[i][j]);
                if (j < 2)
                    printf(" | ");
            }
            printf("\n");
            if (i < 2)
                printf("-----------\n");
        }
        contador = 0;
        printf("\n---Fim de jogo!!!---\n\n");
        if (vencedor == 'X')
        {
            p1win++;
            printf("%s venceu.\n\n", nome1);
        }
        else
        {
            p2win++;
            printf("%s venceu.\n\n", nome2);
        }
        fimjogo();
        return;
    }

    if (contador == 9)
    {
        system("cls");
        printf("Jogo da Velha\n\n");
        printf("Vitorias de %s: %d\n", nome1, p1win);
        printf("Vitorias de %s: %d\n", nome2, p2win);
        printf("Empates: %d\n\n", empate);

        for (int i = 0; i < 3; i++)
        {
            printf(" ");
            for (int j = 0; j < 3; j++)
            {
                printf("%c", tabuleiro[i][j]);
                if (j < 2)
                    printf(" | ");
            }
            printf("\n");
            if (i < 2)
                printf("-----------\n");
        }
        contador = 0;
        empate++;
        printf("\n---Fim de jogo!!!---\n\n");
        printf("Houve um empate.\n\n");
        fimjogo();
        return;
    }

    jogo();
}

void fimjogo()
{
    int opcao;
    printf("1 - Jogar novamente.\n");
    printf("2 - Reiniciar tabuleiro com novos jogadores e vitorias zeradas.\n");
    printf("3 - Fechar programa.\n\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    system("cls");

    switch (opcao)
    {
    case 1:
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                tabuleiro[i][j] = ' ';
        jogo();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(0);
    default:
        fimjogo();
    }
}

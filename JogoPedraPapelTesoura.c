#include <stdio.h>
#include <windows.h>

int main()
{

    int ModoJogo, jogada1, jogada2, vitorias1 = 0, vitorias2 = 0, empates = 0, opcaofinal;

    do
    {
        do
        {
            system("cls");
            printf("-- Jogo Pedra Papel Tesoura --\n");
            printf("1 - Jogador contra Jogador\n");
            printf("2 - Jogador contra Maquina\n");
            printf("Escolha uma das opcoes: ");
            scanf("%d", &ModoJogo);
        } while (ModoJogo < 1 || ModoJogo > 2);

        if (ModoJogo == 1)
        {
            do
            {
                do
                {
                    system("cls");
                    printf("Vez do jogador 1.\n");
                    printf("1 - Pedra\n");
                    printf("2 - Papel\n");
                    printf("3 - Tesoura\n");
                    printf("Insira sua jogada: ");
                    scanf("%d", &jogada1);
                } while (jogada1 < 1 || jogada1 > 3);
                do
                {
                    system("cls");
                    printf("Vez do jogador 2.\n");
                    printf("1 - Pedra\n");
                    printf("2 - Papel\n");
                    printf("3 - Tesoura\n");
                    printf("Insira sua jogada: ");
                    scanf("%d", &jogada2);
                } while (jogada2 < 1 || jogada2 > 3);

                system("cls");

                if ((jogada1 == 1 && jogada2 == 3) ||
                    (jogada1 == 2 && jogada2 == 1) ||
                    (jogada1 == 3 && jogada2 == 2))
                {
                    printf("Jogador 1 venceu!\n");
                    vitorias1++;
                }
                else if (jogada1 == jogada2)
                {
                    printf("Empate!\n");
                    empates++;
                }
                else
                {
                    printf("Jogador 2 venceu!\n");
                    vitorias2++;
                }

                printf("\nVitorias do jogador 1: %d\n", vitorias1);
                printf("Vitorias do jogador 2: %d\n", vitorias2);
                printf("Empates: %d\n", empates);

                printf("\n1 - Jogar novamente mantendo pontuacao\n");
                printf("2 - Jogar novamente resetando pontuacao\n");
                printf("3 - Sair para menu\n");
                printf("4 - Sair do jogo\n");

                printf("Escolha uma das opcoes: ");
                scanf("%d", &opcaofinal);

                if (opcaofinal == 2 || opcaofinal == 3)
                {
                    vitorias1 = 0;
                    vitorias2 = 0;
                    empates = 0;
                }
                else if (opcaofinal == 4)
                {
                    printf("Saindo do jogo...\n");
                    return 0;
                }
            } while (opcaofinal == 1 || opcaofinal == 2);
        }
        else if (ModoJogo == 2)
        {
            do
            {
                do
                {
                    system("cls");
                    printf("Vez do jogador.\n");
                    printf("1 - Pedra\n");
                    printf("2 - Papel\n");
                    printf("3 - Tesoura\n");
                    printf("Insira sua jogada: ");
                    scanf("%d", &jogada1);
                } while (jogada1 < 1 || jogada1 > 3);

                system("cls");
                printf("Vez da maquina.\n");
                printf("1 - Pedra\n");
                printf("2 - Papel\n");
                printf("3 - Tesoura\n");
                jogada2 = rand() % 3 + 1;
                printf("Jogada da maquina foi: %d\n", jogada2);
                system("pause");

                system("cls");
                if ((jogada1 == 1 && jogada2 == 3) ||
                    (jogada1 == 2 && jogada2 == 1) ||
                    (jogada1 == 3 && jogada2 == 2))
                {
                    printf("Jogador venceu!\n");
                    vitorias1++;
                }
                else if (jogada1 == jogada2)
                {
                    printf("Empate!\n");
                    empates++;
                }
                else
                {
                    printf("Maquina venceu!\n");
                    vitorias2++;
                }

                printf("\nVitorias do jogador: %d\n", vitorias1);
                printf("Vitorias da maquina: %d\n", vitorias2);
                printf("Empates: %d\n", empates);

                printf("\n1 - Jogar novamente mantendo pontuacao\n");
                printf("2 - Jogar novamente resetando pontuacao\n");
                printf("3 - Sair para menu\n");
                printf("4 - Sair do jogo\n");

                printf("Escolha uma das opcoes: ");
                scanf("%d", &opcaofinal);

                if (opcaofinal == 2 || opcaofinal == 3)
                {
                    vitorias1 = 0;
                    vitorias2 = 0;
                    empates = 0;
                }
                else if (opcaofinal == 4)
                {
                    printf("Saindo do jogo...\n");
                    return 0;
                }
            } while (opcaofinal == 1 || opcaofinal == 2);
        }
    } while (opcaofinal == 3);
}
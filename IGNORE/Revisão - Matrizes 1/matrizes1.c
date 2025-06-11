#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void q1()
{
    int gabarito[6], aposta[10], cont = 0;

    printf("Insira o gabarito:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &gabarito[i]);
    }

    printf("Insira a aposta:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &aposta[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (aposta[i] == gabarito[j])
            {
                cont++;
                gabarito[j] = -1; // Marca como usado
                break;
            }
        }
    }

    printf("\nAcertos: %d\n\n", cont);
}

void q2()
{
    int n;
    printf("Insira a dimensão das matrizes: ");
    scanf("%d", &n);
    printf("\n");

    int m1[n][n], m2[n][n], m3[n][n];

    printf("Valores da primeira matriz:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m1[i][j]);

    printf("Valores da segunda matriz:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m2[i][j]);

    printf("\nSoma das matrizes:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void q3()
{
    int n = 3, m[3][3], v[3] = {0};

    printf("Insira os valores da matriz 3x3:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            v[j] += m[i][j];

    printf("\nSoma das colunas da matriz:\n");
    for (int j = 0; j < n; j++)
        printf("Coluna %d: %d\n", j + 1, v[j]);

    printf("\n\n");
}

void q4()
{
    int n = 3, m[3][3], v[3] = {0};

    printf("Insira os valores da matriz 3x3:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            v[i] += m[i][j];

    printf("\nSoma das linhas da matriz:\n");
    for (int i = 0; i < n; i++)
        printf("Linha %d: %d\n", i + 1, v[i]);

    printf("\n\n");
}

void q5()
{
    int n = 3, m[3][3], princ = 0, sec = 0;

    printf("Insira os valores da matriz 3x3:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < n; i++)
    {
        princ += m[i][i];
        sec += m[i][n - 1 - i];
    }

    printf("\nSoma da diagonal principal: %d\n", princ);
    printf("Soma da diagonal secundária: %d\n", sec);
    printf("\n\n");
}

void q6()
{
    int n = 3, m[3][3], vc[3] = {0}, vl[3] = {0}, princ = 0, sec = 0;
    int magico = 1;

    printf("Insira os valores da matriz 3x3:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            vl[i] += m[i][j];
            vc[j] += m[i][j];
            if (i == j)
                princ += m[i][j];
            if (i + j == n - 1)
                sec += m[i][j];
        }

    for (int i = 0; i < n && magico; i++)
    {
        if (vl[i] != vl[0])
            magico = 0;
        if (vc[i] != vl[0])
            magico = 0;
    }

    if (princ != vl[0] || sec != vl[0])
        magico = 0;

    if (magico)
        printf("SIM, É um quadrado mágico.\n");
    else
        printf("NÃO, Não é um quadrado mágico.\n");

    printf("\n\n");
}

void q7()
{
    char m0[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', 'X', 'X'}};

    char m1[5][4] = {{' ', ' ', 'X', ' '},
                     {' ', 'X', 'X', ' '},
                     {' ', ' ', 'X', ' '},
                     {' ', ' ', 'X', ' '},
                     {' ', 'X', 'X', 'X'}};

    char m2[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', ' ', ' ', 'X'},
                     {' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', ' '},
                     {' ', 'X', 'X', 'X'}};

    char m3[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', ' ', ' ', 'X'},
                     {' ', 'X', 'X', 'X'},
                     {' ', ' ', ' ', 'X'},
                     {' ', 'X', 'X', 'X'}};

    char m4[5][4] = {{' ', 'X', ' ', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', 'X', 'X'},
                     {' ', ' ', ' ', 'X'},
                     {' ', ' ', ' ', 'X'}};

    char m5[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', ' '},
                     {' ', 'X', 'X', 'X'},
                     {' ', ' ', ' ', 'X'},
                     {' ', 'X', 'X', 'X'}};

    char m6[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', ' '},
                     {' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', 'X', 'X'}};

    char m7[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', ' ', ' ', 'X'},
                     {' ', ' ', 'X', ' '},
                     {' ', ' ', ' ', 'X'},
                     {' ', ' ', ' ', 'X'}};

    char m8[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', 'X', 'X'}};

    char m9[5][4] = {{' ', 'X', 'X', 'X'},
                     {' ', 'X', ' ', 'X'},
                     {' ', 'X', 'X', 'X'},
                     {' ', ' ', ' ', 'X'},
                     {' ', 'X', 'X', 'X'}};

    int num;
    printf("Insira o número a ser exibido (0 a 9): ");
    scanf("%d", &num);
    printf("\n");

    char (*matriz)[4] = NULL;

    switch (num)
    {
    case 0:
        matriz = m0;
        break;
    case 1:
        matriz = m1;
        break;
    case 2:
        matriz = m2;
        break;
    case 3:
        matriz = m3;
        break;
    case 4:
        matriz = m4;
        break;
    case 5:
        matriz = m5;
        break;
    case 6:
        matriz = m6;
        break;
    case 7:
        matriz = m7;
        break;
    case 8:
        matriz = m8;
        break;
    case 9:
        matriz = m9;
        break;
    default:
        printf("Número inválido, tente um número de 0 a 9\n\n");
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int opcao;

    do
    {
        system("cls");
        printf("Digite o número da questão:\n\n");
        printf("1 - Mega Sena\n");
        printf("2 - Chuva\n");
        printf("3 - Somar coluna da matriz\n");
        printf("4 - Somar linha da matriz\n");
        printf("5 - Somar diagonal\n");
        printf("6 - Quadrado Mágico\n");
        printf("7 - Converter número em X\n");
        printf("0 - Sair\n\n");

        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
            q1();
            break;
        case 2:
            q2();
            break;
        case 3:
            q3();
            break;
        case 4:
            q4();
            break;
        case 5:
            q5();
            break;
        case 6:
            q6();
            break;
        case 7:
            q7();
            break;
        case 0:
            printf("Obrigado por utilizar o sistema!\n\n");
            exit(0);
        default:
            printf("Opção inválida!\n");
        }

        system("pause");

    } while (1);

    return 0;
}

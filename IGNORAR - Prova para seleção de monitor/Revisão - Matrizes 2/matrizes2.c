#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void q1()
{
    int n = 5, m[5][5], soma = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m[i][j] = rand() % 50 + 1;
            if (i == j)
            {
                soma += m[i][j];
            }
        }
    }

    printf("Matriz 5x5 aleatória:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", soma);
}

void q2()
{
    int n = 8, m[8][8], somaP = 0, somaS = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j == 8)
            {
                m[i - 1][j - 1] = (i * i) + (j * j) + 2;
            }
            else if (i + j > 8)
            {
                m[i - 1][j - 1] = j + 4;
            }
            else // i + j < 8
            {
                m[i - 1][j - 1] = 3 * i + j;
            }

            if (i == j)
            {
                somaP += m[i - 1][j - 1];
            }
            if ((i - 1) + (j - 1) == n - 1)
            {
                somaS += m[i - 1][j - 1];
            }
        }
    }

    printf("Matriz:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", somaP);
    printf("Soma da diagonal secundária: %d\n", somaS);
    printf("Multiplicação das diagonais: %d\n", somaP * somaS);
}

void q4()
{
    int a[3][5], b[3][5], c[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = rand() % 50 + 1;
            b[i][j] = rand() % 50 + 1;
        }
    }

    printf("\nMatriz A 3x5 aleatória:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B 3x5 aleatória:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma das matrizes:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

void q5()
{
    int n = 6, m[6][6], soma = 0;

    printf("Matriz 6x6 aleatória:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m[i][j] = rand() % 10 + 1;
            printf("%d ", m[i][j]);

            if (i >= j)
            {
                soma += m[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSoma dos elementos abaixo da diagonal principal: %d\n", soma);
}

void q6()
{
    int n = 3, m[3][3];
    int soma_coluna1 = 0, produto_linha1 = 1, soma_total = 0;
    double media;

    printf("Matriz 3x3 aleatória:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m[i][j] = rand() % 10 + 1;
            printf("%d ", m[i][j]);

            if (j == 0)
                soma_coluna1 += m[i][j];
            if (i == 0)
                produto_linha1 *= m[i][j];

            soma_total += m[i][j];
        }
        printf("\n");
    }

    media = (double)soma_total / (n * n);

    printf("\nA) Soma da 1ª coluna: %d\n", soma_coluna1);
    printf("B) Produto da 1ª linha: %d\n", produto_linha1);
    printf("C) Soma total da matriz: %d\n", soma_total);
    printf("D) Média dos elementos da matriz: %.2lf\n", media);
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
        printf("1 - Soma diagonal principal\n");
        printf("2 - Questão 2 e 3 (matriz com condições)\n");
        printf("4 - Somar matriz\n");
        printf("5 - Somar abaixo da diagonal\n");
        printf("6 - Cálculos matriz\n");
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
        case 4:
            q4();
            break;
        case 5:
            q5();
            break;
        case 6:
            q6();
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

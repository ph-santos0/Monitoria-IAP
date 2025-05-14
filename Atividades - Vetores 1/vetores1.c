#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void q1()
{
    int vetor[50];
    for (int i = 0; i < 50; i++)
    {
        vetor[i] = i + 1;
        printf("%d\n", vetor[i]);
    }
}

void q2()
{
    int vetor[100];
    for (int i = 0; i < 100; i++)
    {
        vetor[i] = 100 - i;
        printf("%d\n", vetor[i]);
    }
}

void q3()
{
    int vetor[100];
    for (int i = 0; i < 100; i++)
    {
        vetor[i] = 2 * i + 1;
        printf("%d\n", vetor[i]);
    }
}

void q4()
{
    double vetor[10];
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%lf", &vetor[i]);
        vetor[i] /= 2;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf\n", vetor[i]);
    }
}

void q5()
{
    double vetor[10];
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%lf", &vetor[i]);
        vetor[i] *= vetor[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf\n", vetor[i]);
    }
}

void q6()
{
    double vetor[10], total = 0;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%lf", &vetor[i]);
        total += vetor[i];
    }

    printf("Números maiores que a média:\n");
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > total / 10)
        {
            printf("%d°: %.2lf\n", i + 1, vetor[i]);
        }
    }
}

void q7()
{
    int numero[10], auxnum;
    double tempo[10], auxtemp;

    printf("Digite o numero do corredor e seu tempo:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Número: ");
        scanf("%d", &numero[i]);
        printf("Tempo: ");
        scanf("%lf", &tempo[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (tempo[j] > tempo[j + 1])
            {
                auxtemp = tempo[j];
                tempo[j] = tempo[j + 1];
                tempo[j + 1] = auxtemp;

                auxnum = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = auxnum;
            }
        }
    }

    printf("Ranking:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d°: %d, %.2lf\n", i + 1, numero[i], tempo[i]);
    }
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
        printf("1 - Números inteiros de 1 a 50\n");
        printf("2 - Números inteiros de 1 a 100 em ordem decrescente\n");
        printf("3 - 100 primeiros números ímpares\n");
        printf("4 - Calcular metade de inteiros\n");
        printf("5 - Calcular quadrado de inteiros\n");
        printf("6 - Alturas acima da média\n");
        printf("7 - Corrida\n");
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

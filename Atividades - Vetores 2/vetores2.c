#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void q1()
{
    int n = 3, a[3], b[3], c[3];

    printf("Insira os 3 números do primeiro vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Insira os 3 números do segundo vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Soma dos vetores:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d°: %d\n", i + 1, c[i]);
    }
}

void q2()
{
    int n = 3, v[3];

    printf("Insira os 3 números do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Ímpares:\n");
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
        {
            printf("%d°: %d\n", i + 1, v[i]);
        }
    }
}

void q3()
{
    int n = 6, a[6], m[6], x;

    printf("Insira os 6 números do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Insira um valor para multiplicar:\n");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        m[i] = a[i] * x;
    }

    printf("Vetor resultado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d°: %d\n", i + 1, m[i]);
    }
}

void q4()
{
    int n = 5;
    double notas[5], total = 0;

    printf("Digite 5 notas:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%lf", &notas[i]);
        total += notas[i];
    }

    printf("Notas maiores que a média:\n");
    for (int i = 0; i < n; i++)
    {
        if (notas[i] > total / n)
        {
            printf("%d°: %.2lf\n", i + 1, notas[i]);
        }
    }
}

void q5()
{
    int n = 8, x[8], conty = 0, contw = 0;
    int y[8], w[8];

    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &x[i]);
        if (x[i] >= 10 && x[i] <= 40)
        {
            y[conty++] = x[i];
        }
        if (i % 2 != 0)
        {
            w[contw++] = x[i];
        }
    }

    printf("Vetor de números entre 10 e 40:\n");
    for (int i = 0; i < conty; i++)
    {
        printf("%d°: %d\n", i + 1, y[i]);
    }

    printf("Vetor de números nas posições pares:\n");
    for (int i = 0; i < contw; i++)
    {
        printf("%d°: %d\n", i + 1, w[i]);
    }
}

void q6()
{
    int n;
    printf("Tamanho do vetor:\n");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d°: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d°: %d\n", n - i, vetor[i]);
    }
}

void q7()
{
    int n;
    printf("Insira o número de lançamentos do dado: ");
    scanf("%d", &n);

    int lances[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        lances[i] = rand() % 6 + 1;
        printf("%d\n", lances[i]);
    }
}

void q8()
{
    int n;
    printf("Digite o número de elementos dos vetores: ");
    scanf("%d", &n);

    int x[n], y[n];
    printf("Digite os elementos do vetor x:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("Digite os elementos do vetor y:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

    int produtoEscalar = 0;
    for (int i = 0; i < n; i++)
    {
        produtoEscalar += x[i] * y[i];
    }

    printf("O produto escalar dos vetores é: %d\n", produtoEscalar);
}

void q9()
{
    char gabarito[3];
    printf("Insira a resposta das 3 questões da prova (A a E):\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%dª questão: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    int num;
    printf("Insira o número de alunos: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int numeroAluno;
        char respostas[3];
        int acertos = 0;

        printf("\nNúmero do aluno: ");
        scanf("%d", &numeroAluno);

        for (int j = 0; j < 3; j++)
        {
            printf("Resposta da %dª questão: ", j + 1);
            scanf(" %c", &respostas[j]);
            if (respostas[j] == gabarito[j])
            {
                acertos++;
            }
        }

        printf("Aluno %d acertou %d questão(ões).\n", numeroAluno, acertos);
    }
}

void q10()
{
    double A[5], B[5], X;
    int encontrado = 0;

    printf("Digite 5 valores para o vetor A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%lf", &A[i]);
    }

    printf("Digite um valor para X: ");
    scanf("%lf", &X);

    for (int i = 0; i < 5; i++)
    {
        if (A[i] == X)
        {
            printf("O valor X = %.2lf foi encontrado na posição %d do vetor A.\n", X, i);
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("O valor X = %.2lf não foi encontrado no vetor A.\n", X);
    }

    printf("Vetor B (A[i] / X):\n");
    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i] / X;
        printf("B[%d] = %.2lf\n", i, B[i]);
    }
}

void q11()
{
    int A[5], B[5], C[10];

    printf("Digite 5 valores inteiros para o vetor A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite 5 valores inteiros para o vetor B:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        C[i * 2] = A[i];
        C[i * 2 + 1] = B[i];
    }

    printf("Vetor C (intercalado):\n");
    for (int i = 0; i < 10; i++)
    {
        printf("C[%d] = %d\n", i, C[i]);
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
        printf("1 - Soma de vetores\n");
        printf("2 - Posição de ímpares\n");
        printf("3 - Multiplicar vetor por um inteiro\n");
        printf("4 - Notas acima da média\n");
        printf("5 - Vetores filhos\n");
        printf("6 - Vetor na ordem inversa\n");
        printf("7 - Lançamento de dados\n");
        printf("8 - Produto escalar de vetores\n");
        printf("9 - Conferir gabarito de alunos\n");
        printf("10 - Elemento igual e divisão\n");
        printf("11 - Intercalar vetores\n");
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
        case 8:
            q8();
            break;
        case 9:
            q9();
            break;
        case 10:
            q10();
            break;
        case 11:
            q11();
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

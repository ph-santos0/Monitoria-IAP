#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void q1()
{
    int v1[3], v2[3], v3[3];

    printf("Insira os 3 numeros do primeiro vetor:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &v1[i]);
    }

    printf("Insira os 3 numeros do segundo vetor:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &v2[i]);
    }

    printf("Soma dos vetores:\n");
    for (int i = 0; i < 3; i++)
    {
        v3[i] = v1[i] + v2[i];
        printf("Posicao %d: %d\n", i, v3[i]);
    }
}

void q2()
{
    int vetor[3];

    printf("Insira os 3 numeros do vetor:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Impares:\n");
    for (int i = 0; i < 3; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("Posicao %d: %d\n", i, vetor[i]);
        }
    }
}

void q3()
{
    int a[6], m[6], x;

    printf("Insira os 6 numeros do vetor:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nInsira um valor para multiplicar: ");
    scanf("%d", &x);

    printf("\nVetor resultado:\n");
    for (int i = 0; i < 6; i++)
    {
        m[i] = a[i] * x;
        printf("Posicao %d: %d\n", i, m[i]);
    }
}

void q4()
{
    float notas[5], soma = 0;

    printf("Digite 5 notas:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    printf("Notas maiores que a media da turma:\n");
    for (int i = 0; i < 5; i++)
    {
        if (notas[i] > soma / 5)
        {
            printf("Posicao %d: %.2f\n", i, notas[i]);
        }
    }
}

void q5()
{
    int x[8], y[8], w[4], indicey = 0, indicew = 0;

    printf("Digite 8 elementos para o vetor X:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &x[i]);
        if (x[i] > 10 && x[i] < 40)
        {
            y[indicey] = x[i];
            indicey++;
        }
        if (i % 2 == 0)
        {
            w[indicew] = x[i];
            indicew++;
        }
    }

    printf("\nVetor Y de numeros do vetor X que estao entre 10 e 40:\n");
    for (int i = 0; i < indicey; i++)
    {
        printf("Posicao %d: %d\n", i, y[i]);
    }

    printf("\nVetor W de numeros nas posicoes pares do vetor X:\n");
    for (int i = 0; i < indicew; i++)
    {
        printf("Posicao %d: %d\n", i, w[i]);
    }
}

void q6()
{
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];

    printf("\nDigite os %d numeros do vetor:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem inversa:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
}

void q7()
{
    int n;
    printf("Insira o numero de lancamentos do dado: ");
    scanf("%d", &n);

    int lances[n], faces[7] = {0};

    printf("\nInsira o resultado dos lancamentos (Valores de 1 a 7): \n");
    for (int i = 0; i < n; i++)
    {
        printf("Lancamento %d: ", i + 1);
        scanf("%d", &lances[i]);

        switch (lances[i])
        {
        case 1:
            faces[0]++;
            break;
        case 2:
            faces[1]++;
            break;
        case 3:
            faces[2]++;
            break;
        case 4:
            faces[3]++;
            break;
        case 5:
            faces[4]++;
            break;
        case 6:
            faces[5]++;
            break;
        case 7:
            faces[6]++;
            break;
        }
    }

    printf("\nOcorrencias de cada face:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Face %d: %d\n", i + 1, faces[i]);
    }
}

void q8()
{
    int n;
    printf("Digite o numero de elementos dos vetores x e y: ");
    scanf("%d", &n);
    int x[n], y[n], produtoEscalar = 0;

    printf("\nDigite os elementos do vetor x:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &x[i]);
    }

    printf("\nDigite os elementos do vetor y:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &y[i]);
        produtoEscalar = produtoEscalar + x[i] * y[i];
    }

    printf("\nO produto escalar dos vetores e: %d", produtoEscalar);
}

void q9()
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

void q10()
{
    float A[5], B[5], X;

    printf("Digite 5 valores para o vetor A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    printf("\nDigite um valor para X: ");
    scanf("%f", &X);

    int encontrado = 0;
    for (int i = 0; i < 5; i++)
    {
        if (A[i] == X)
        {
            printf("O valor X = %.0f foi encontrado na posicao %d do vetor A.\n", X, i);
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("O valor X = %f nao foi encontrado no vetor A.\n", X);
    }

    printf("\nVetor B (A[i] / X):\n");
    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i] / X;
        printf("B[%d] = %.2f\n", i, B[i]);
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

    printf("\nDigite 5 valores inteiros para o vetor B:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Intercalando (2*i = pares | 2*i+1 = impares)
    for (int i = 0; i < 5; i++)
    {
        C[i * 2] = A[i];
        C[i * 2 + 1] = B[i];
    }

    printf("\nVetor C (intercalado):\n");
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
            return 0;
        default:
            printf("Opção inválida!\n");
        }

        system("pause");

    } while (1);

    return 0;
}

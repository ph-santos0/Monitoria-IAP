#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        system("cls");
        printf("Insira a quantidade de elementos do vetor(ate 5):\n");
        scanf("%d", &n);
    } while (n > 5 || n < 0);

    int a[n], m[n], x;

    printf("Insira os %d numeros do vetor:\n", n);
    for (int i = 0; i < n; i++)
    {
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
        printf("%d\n", m[i]);
    }
}
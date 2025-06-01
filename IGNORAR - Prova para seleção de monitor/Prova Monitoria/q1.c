#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[3], num, cont = 0;

    printf("Preencha o vetor de 3 elementos:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Insira o %do numero: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Insira o numero a ser procurado no vetor: ");
    scanf(" %d", &num);

    for (int i = 0; i < 3; i++)
    {
        if (a[i] == num)
        {
            cont++;
        }
    }

    printf("O numero foi encontrado %d vez(es)", cont);

    return 0;
}
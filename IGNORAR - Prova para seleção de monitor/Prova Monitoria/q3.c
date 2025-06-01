#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3, m[3][3], vc[3] = {0}, vl[3] = {0}, princ = 0, sec = 0;
    int magico = 1;

    printf("Insira os valores da matriz 3x3 pava verificar se e uma matriz magica:\n");
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
        printf("SIM, e uma matriz magica de soma: %d\n", princ);
    else
        printf("-10 (Nao e matriz magica)\n");

    printf("\n\n");
}
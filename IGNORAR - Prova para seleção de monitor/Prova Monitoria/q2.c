#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[4];

    printf("Insira o numero para verificar se e palindromo: ");
    scanf("%s", num);

    if (num[0] == num[3] && num[1] == num[2])
    {
        printf("E palindromo");
    }
    else
    {
        printf("Nao e palindromo");
    }

    return 0;
}
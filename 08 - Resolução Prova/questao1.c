#include <stdio.h>

int main()
{
    char numero[4];

    printf("Digite um numero de 4 digitos: ");
    scanf("%s", numero);

    if (numero[0] == numero[3] && numero[1] == numero[2])
    {
        printf("E um palindromo.\n");
    }
    else
    {
        printf("Nao e um palindromo.\n");
    }

    return 0;
}

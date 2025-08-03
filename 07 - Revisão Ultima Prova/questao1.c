#include <stdio.h>

int main()
{
    char palavra[6];

    printf("Digite uma palavra de 6 letras: ");
    scanf("%s", palavra);

    if (palavra[0] == palavra[5] && palavra[1] == palavra[4] && palavra[2] == palavra[3])
    {
        printf("A palavra e um palindromo.\n");
    }
    else
    {
        printf("A palavra nao e um palindromo.\n");
    }

    return 0;
}

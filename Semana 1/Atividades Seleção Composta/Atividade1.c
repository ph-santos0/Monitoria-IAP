#include <stdio.h>

int main()
{
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 4 == 0)
    {
        printf("\nE divisivel por 2 e por 4");
    }
    else
    {
        printf("\nNao e divisivel por 2 e por 4");
    }

    return 0;
}
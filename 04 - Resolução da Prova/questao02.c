#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero positivo ou negativo:\n");
    scanf("%d", &num);

    if (num < 0)
    {
        num = num * -1;
    }

    printf("%d", num);

    return 0;
}
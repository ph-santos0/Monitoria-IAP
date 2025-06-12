#include <stdio.h>

int main()
{
    float nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 9.0 && nota <= 10.0)
    {
        printf("Conceito A\n");
    }
    else if (nota >= 7.5)
    {
        printf("Conceito B\n");
    }
    else if (nota >= 6.0)
    {
        printf("Conceito C\n");
    }
    else if (nota >= 4.0)
    {
        printf("Conceito D\n");
    }
    else
    {
        printf("Conceito E\n");
    }

    return 0;
}

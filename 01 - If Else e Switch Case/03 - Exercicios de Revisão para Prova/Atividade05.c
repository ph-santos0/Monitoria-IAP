#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0)
    {
        printf("Aprovado\n");
    }
    else if (media < 4.0)
    {
        printf("Reprovado\n");
    }
    else
    {
        printf("Exame Final\n");
    }

    return 0;
}

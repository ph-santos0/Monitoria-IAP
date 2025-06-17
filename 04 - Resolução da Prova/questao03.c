#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7.0)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Exame Final\n");
        printf("Digite a nota do exame final: ");
        float notaexame;
        scanf("%f", &notaexame);
        if ((media + notaexame) / 2 >= 5)
        {
            printf("Aprovado no exame final.");
        }
        else
        {
            printf("Reprovado.");
        }
    }

    return 0;
}
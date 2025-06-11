#include <stdio.h>

int main()
{
    float peso, altura, massa;
    printf("Insira o seu peso: ");
    scanf("%f", &peso);
    printf("Insira o sua altura: ");
    scanf("%f", &altura);
    massa = peso / (altura * altura);

    printf("\nSua massa e: %.2lf\n", massa);

    if (massa < 26)
    {
        printf("Voce nao tem grau de obesidade.");
    }
    else if (massa >= 26 && massa <= 30)
    {
        printf("Voce esta na faixa de obesidade.");
    }
    else
    {
        printf("Voce esta na faixa de obesidade morbida.");
    }

    return 0;
}
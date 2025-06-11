#include <stdio.h>

int main()
{
    int numeroSecreto = 7;
    int palpite;

    while (palpite != numeroSecreto)
    {
        printf("Adivinhe o numero secreto (entre 1 e 10): ");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto)
        {
            printf("Parabens! Voce acertou!\n");
        }
        else if (palpite < numeroSecreto)
        {
            printf("Muito baixo! Tente um numero maior.\n");
        }
        else
        {
            printf("Muito alto! Tente um numero menor.\n");
        }
    }
    return 0;
}

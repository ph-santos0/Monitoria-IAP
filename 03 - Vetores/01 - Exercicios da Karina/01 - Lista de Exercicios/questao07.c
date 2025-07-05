#include <stdio.h>

int main()
{
    int n;
    printf("Insira o numero de lancamentos do dado: ");
    scanf("%d", &n);

    int lances[n], faces[7] = {0};

    printf("\nInsira o resultado dos %d lancamentos (Valores de 1 a 7): \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Lancamento %d: ", i + 1);
        scanf("%d", &lances[i]);

        faces[lances[i] - 1]++;
    }

    printf("\nOcorrencias de cada face:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Face %d: %d\n", i + 1, faces[i]);
    }
}

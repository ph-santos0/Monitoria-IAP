#include <stdio.h>

int main()
{
    int n;
    printf("Insira o numero de lancamentos do dado: ");
    scanf("%d", &n);

    int lances[n], faces[7] = {0};

    printf("\nInsira o resultado dos lancamentos (Valores de 1 a 7): \n");
    for (int i = 0; i < n; i++)
    {
        printf("Lancamento %d: ", i + 1);
        scanf("%d", &lances[i]);

        switch (lances[i])
        {
        case 1:
            faces[0]++;
            break;
        case 2:
            faces[1]++;
            break;
        case 3:
            faces[2]++;
            break;
        case 4:
            faces[3]++;
            break;
        case 5:
            faces[4]++;
            break;
        case 6:
            faces[5]++;
            break;
        case 7:
            faces[6]++;
            break;
        }
    }

    printf("\nOcorrencias de cada face:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Face %d: %d\n", i + 1, faces[i]);
    }
}
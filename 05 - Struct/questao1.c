#include <stdio.h>

int main()
{
    struct Cliente
    {
        int codigo;
        char telefone[15];
    };

    struct Cliente clientes[2];

    printf("Insira os dados dos dois clientes:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\nCliente %d\n", i + 1);
        printf("Digite o codigo: ");
        scanf("%d", &clientes[i].codigo);

        printf("Digite o telefone: ");
        scanf("%s", clientes[i].telefone);
    }

    printf("\nDados dos Clientes\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Cliente %d: Codigo: %d, Telefone: %s\n", i + 1, clientes[i].codigo, clientes[i].telefone);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int codigo;
    int sexo;

    printf("Digite o codigo da pessoa (numero inteiro): ");
    scanf("%d", &codigo);

    printf("Digite o sexo da pessoa:\n");
    printf("  1 - Feminino\n");
    printf("  2 - Masculino\n");
    printf("Opcao: ");
    scanf("%d", &sexo);

    printf("\nMensagem:\n");
    if (sexo == 2)
    {
        printf("Ilmo Sr. %d\n", codigo);
    }
    else if (sexo == 1)
    {
        printf("Ilma Sra. %d\n", codigo);
    }
    else
    {
        printf("Sexo Invalido\n");
    }

    return 0;
}
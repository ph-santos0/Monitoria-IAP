#include <stdio.h>

int main()
{
    int opcao;
    float saldo = 1000;
    float valor;

    do
    {
        printf("Saldo atual: R$ %.2f\n", saldo);
        printf("1 - Depositar dinheiro\n");
        printf("2 - Sacar dinheiro\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor para depositar: R$ ");
            scanf("%f", &valor);
            if (valor > 0)
            {
                saldo = saldo + valor;
                printf("Deposito realizado com sucesso!\n");
            }
            else
            {
                printf("Valor invalido para deposito.\n");
            }
            break;

        case 2:
            printf("Digite o valor para sacar: R$ ");
            scanf("%f", &valor);
            if (valor > 0 && valor <= saldo)
            {
                saldo = saldo - valor;
                printf("Saque realizado com sucesso!\n");
            }
            else
            {
                printf("Valor invalido ou saldo insuficiente.\n");
            }
            break;

        case 3:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\n");

    } while (opcao != 3);

    printf("Saldo final: R$ %.2f\n", saldo);
    printf("Obrigado por usar nosso caixa eletronico!\n");

    return 0;
}

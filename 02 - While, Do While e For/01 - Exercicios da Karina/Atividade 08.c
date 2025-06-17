#include <stdio.h>

int main() {
    int idade, sexo;
    int fem10a25 = 0;
    int mascMais30 = 0;
    
    while (idade >= 0) {
        printf("\nIdade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Sexo (1-Feminino, 2-Masculino): ");
        scanf("%d", &sexo);

        if (sexo == 1 && idade >= 10 && idade <= 25) {
            fem10a25++;
        } else if (sexo == 2 && idade > 30) {
            mascMais30++;
        }
    }

    printf("\nQuantidade de pessoas do sexo feminino com idade entre 10 e 25 anos: %d\n", fem10a25);
    printf("Quantidade de pessoas do sexo masculino com idade maior que 30 anos: %d\n", mascMais30);

    return 0;
}

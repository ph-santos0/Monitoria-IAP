#include <stdio.h>

int main() {
    int idade, contador = 0, i = 0;

    printf("Digite a idade de 3 pessoas:\n");

    while (i < 3) {
        printf("Pessoa %d: ", i + 1);
        scanf("%d", &idade);
        if (idade < 18) {
            contador++;
        }
        i++;
    }

    printf("Total de pessoas com menos de 18 anos: %d\n", contador);

    return 0;
}
#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 0;

    do {
        soma += numero;
        numero += 2;
    } while (numero < 100);

    printf("A soma de todos os numeros pares menores que 100 eh: %d\n", soma);

    return 0;
}
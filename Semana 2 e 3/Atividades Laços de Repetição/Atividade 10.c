#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;
    int i;

    printf("Digite um numero inteiro nao negativo para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d (%d!) eh: %lld\n", n, n, fatorial);
    }

    return 0;
}
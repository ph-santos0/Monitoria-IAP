#include <stdio.h>

int main() {
    double serie = 0;
    int i;
    int n_termos = 8;
    double numerador, denominador;

    for (i = 1; i <= n_termos; i++) {
        numerador = 2.0 * i;
        denominador = 17.0 - 2.0 * (i - 1);
        if (denominador == 0) {
            printf("Erro: Denominador zero no termo %d.\n", i);
            return 1;
        }
        serie += numerador / denominador;
    }

    printf("Soma da serie para o %d termo: %.2f\n", n_termos, serie);

    return 0;
}
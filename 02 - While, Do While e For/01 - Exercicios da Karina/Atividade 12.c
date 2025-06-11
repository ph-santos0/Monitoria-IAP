#include <stdio.h>

int main() {
    float serie = 0;
    int i;
    int n_termos = 11;

    for (i = 1; i <= n_termos; i++) {
        serie += 1.0 / i;
    }

    printf("Soma da serie para o %d termo: %.2f\n", n_termos, serie);

    return 0;
}
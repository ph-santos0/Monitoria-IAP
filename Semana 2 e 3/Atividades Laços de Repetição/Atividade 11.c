#include <stdio.h>

int main() {
    float s = 0;
    int i;
    int n_termos = 20;

    for (i = 1; i <= n_termos; i++) {
        s += 1.0 / (4.0 * i);
    }

    printf("O valor de S para o %d termo eh: %f\n", n_termos, s);

    return 0;
}
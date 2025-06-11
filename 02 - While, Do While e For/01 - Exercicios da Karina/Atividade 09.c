#include <stdio.h>
#include <math.h>

int main() {
    int termo_inicial = 3;
    int razao = 3;
    int i, termo_atual;

    printf("Termos da PG: ");

    for (i = 0; i < 8; i++) {
        termo_atual = termo_inicial * pow(razao, i);
        printf("%d", termo_atual);
        if (i < 7) {
            printf(", ");
        }
    }
    printf(".\n");

    return 0;
}
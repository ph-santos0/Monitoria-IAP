#include <stdio.h>

int main() {
    float base, altura, area;
    int i = 0;

    while (i < 5) {
        printf("\nTriangulo %d:\n", i + 1);
        printf("Digite a base: ");
        scanf("%f", &base);
        printf("Digite a altura: ");
        scanf("%f", &altura);

        area = (base * altura) / 2;
        printf("Area do triangulo %d: %.2f\n", i + 1, area);
        i++;
    }

    return 0;
}
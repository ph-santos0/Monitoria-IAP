#include <stdio.h>

int main() {
    float tf, tc;

    tf = 50.0;

    printf("Conversao: Fahrenheit -> Celsius\n");

    do {
        tc = (tf - 32.0) * 5.0 / 9.0;
        printf("%.1f graus Fahrenheit = %.2f graus Celsius.\n", tf, tc);
        tf += 1.0;
    } while (tf <= 70.0);

    return 0;
}
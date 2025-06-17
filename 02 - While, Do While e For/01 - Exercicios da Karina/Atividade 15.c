#include <stdio.h>

int main()
{
    float tc, tf = 50;

    do
    {
        tc = (tf - 32.0) * 5.0 / 9.0;
        printf("%.1f graus Fahrenheit = %.2f graus Celsius.\n", tf, tc);
        tf++;
    } while (tf <= 70);
}

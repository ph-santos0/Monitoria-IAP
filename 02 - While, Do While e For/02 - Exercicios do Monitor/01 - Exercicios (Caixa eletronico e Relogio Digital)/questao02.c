#include <stdio.h>

int main()
{
    int hora, minuto;

    for (hora = 0; hora < 24; hora++)
    {
        for (minuto = 0; minuto < 60; minuto++)
        {
            printf("%02d:%02d\n", hora, minuto); // %02d mostra hora com dois dígitos
        }
    }

    return 0;
}

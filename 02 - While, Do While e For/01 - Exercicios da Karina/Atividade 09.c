#include <stdio.h>

int main()
{
    int cont, num = 3;

    for(cont = 0; cont < 8; cont++)
    {
        printf("%d\n", num);
        num = num* 3;
    }
}

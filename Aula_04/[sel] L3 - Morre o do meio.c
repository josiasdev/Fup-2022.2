#include <stdio.h>

int main()
{
    int valor, valor2, valor3;
    scanf("%d %d %d", &valor, &valor2, &valor3);
    if ((valor > valor2) != (valor > valor3))
    {
        printf("%d", valor);
    }
    else if ((valor2 > valor3) != (valor2 > valor))
    {
        printf("%d", valor2);
    }
    else
    {
        printf("%d", valor3);
    }
}
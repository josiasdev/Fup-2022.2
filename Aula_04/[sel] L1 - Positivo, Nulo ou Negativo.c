#include <stdio.h>

int main()
{
    int numero;
    scanf("%d", &numero);
    if (numero > 0)
    {
        printf("positivo");
    }
    else if (numero < 0)
    {
        printf("negativo");
    }
    else
    {
        printf("nulo");
    }
}
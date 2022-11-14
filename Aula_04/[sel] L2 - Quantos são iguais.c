#include <stdio.h>

int main()
{
    int valor, valor2, valor3, iguais = 0;
    scanf("%i %i %i", &valor, &valor2, &valor3);
    if (valor == valor2 && valor2 == valor3 && valor3 == valor)
    {
        iguais = iguais + 3;
    }
    else if (valor2 == valor3)
    {
        iguais = iguais + 2;
    }
    else if (valor == valor2)
    {
        iguais = iguais + 2;
    }
    else if (valor == valor3)
    {
        iguais = iguais + 2;
    }
    printf("%i", iguais);
}
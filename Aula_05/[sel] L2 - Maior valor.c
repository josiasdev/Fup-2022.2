#include <stdio.h>

int main()
{
    int numero, numero2, numero3, numero4, maior;
    scanf("%i %i %i %i", &numero, &numero2, &numero3, &numero4);
    maior = numero;
    if (numero2 > maior)
    {
        maior = numero2;
    }
    if (numero3 > maior)
    {
        maior = numero3;
    }
    if (numero4 > maior)
    {
        maior = numero4;
    }
    printf("%i", maior);
}
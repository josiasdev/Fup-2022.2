#include <stdio.h>

int main()
{
    int digito, contador = 0;
    scanf("%i", &digito);
    int digito2 = digito;
    for (int i = 0; i < 8; i++)
    {
        digito2 = (digito2 / 10);
        contador++;
        if (digito2 == 0)
        {
            break;
        }
    }
    int vetor[contador];

    for (int i = 0; i < contador; i++)
    {
        vetor[i] = (digito % 10);
        digito = (digito / 10);
        if (digito == 0)
        {
            break;
        }
    }
    for (int i = contador - 1; i >= 0; i--)
    {
        printf("%i ", vetor[i]);
    }
}
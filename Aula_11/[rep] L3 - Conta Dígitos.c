#include <stdio.h>

int main()
{
    int digito, numero_contato, contador = 0;

    scanf("%i %i", &digito, &numero_contato);

    while (numero_contato > 0)
    {
        if (numero_contato % 10 == digito)
        {
            contador++;
        }
        numero_contato = numero_contato / 10;
    }
    printf("%i", contador);
}
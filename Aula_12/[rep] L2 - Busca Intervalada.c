#include <stdio.h>

int main()
{
    int quantidade_numeros, limite_inferior, limite_superior, N_numeros, contador = 0;
    scanf("%d %d %d", &quantidade_numeros, &limite_inferior, &limite_superior);
    for (int i = 1; i <= quantidade_numeros; i++)
    {
        scanf("%i", &N_numeros);
        if (N_numeros == limite_inferior)
        {
            contador++;
        }
        else if (N_numeros == limite_superior)
        {
            contador++;
        }
        else if ((N_numeros > limite_inferior) && (N_numeros < limite_superior))
        {
            contador++;
        }
    }
    printf("%d", contador);
}
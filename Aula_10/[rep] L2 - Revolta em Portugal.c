#include <stdio.h>

int main()
{
    int limite_inferior, limite_superior, soma_par = 0, soma_impar = 0;
    scanf("%i %i", &limite_inferior, &limite_superior);
    for (; limite_inferior <= limite_superior;)
    {
        if (limite_inferior % 2 == 0)
        {
            soma_par = soma_par + limite_inferior;
        }
        else
        {
            soma_impar = soma_impar + limite_inferior;
        }
        limite_inferior++;
    }
    if (soma_par > soma_impar)
    {
        printf("soldados");
    }
    else
    {
        printf("rebeldes");
    }
}
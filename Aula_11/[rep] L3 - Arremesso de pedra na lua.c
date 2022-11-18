#include <stdio.h>
#include <limits.h>

int main()
{
    int competidores, pedraA, pedraB, distancia;
    int menor = INT_MAX;
    int ganhador = -1;
    scanf("%i", &competidores);

    for (int i = 0; i <= competidores - 1; i++)
    {
        scanf("%i %i", &pedraA, &pedraB);
        if ((pedraA >= 10) && (pedraB >= 10))
        {
            distancia = pedraA - pedraB;
            if (distancia < 0)
            {
                distancia = -distancia;
            }
            if (distancia < menor)
            {
                menor = distancia;
                ganhador = i;
            }
        }
    }
    if (ganhador == -1)
    {
        printf("sem ganhador");
    }
    else
    {
        printf("%d", ganhador);
    }
}
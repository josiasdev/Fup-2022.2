#include <stdio.h>

int main()
{
    int quantidade_album, quantidade_baruel;
    scanf("%i %i", &quantidade_album, &quantidade_baruel);
    int figurinha[quantidade_baruel];
    int contador_repetidos = 0;
    int contador_encontrou = 0;
    int contador_faltando = 0;

    for (int i = 0; i < quantidade_baruel; i++)
    {
        scanf("%i", &figurinha[i]);
    }

    for (int i = 0; i < quantidade_baruel - 1; i++)
    {
        if (figurinha[i] == figurinha[i + 1])
        {
            contador_repetidos++;
            printf("%i ", figurinha[i]);
        }
        if (contador_repetidos == 0)
        {
            printf("N");
        }
    }

    printf("\n");

    for (int j = 1; j <= quantidade_album; j++)
    {
        contador_encontrou = 0;
        for (int i = 0; i <= quantidade_baruel - 1; i++)
        {
            if (figurinha[i] == j)
            {
                contador_encontrou = 1;
            }
        }
        if (contador_encontrou == 0)
        {
            printf("%i ", j);
            contador_faltando++;
        }
        contador_encontrou = 0;
    }
    if (contador_faltando == 0)
    {
        printf("N");
    }
}
#include <stdio.h>

int main()
{
    int quantidade_cartas, cartas, total_mao = 0, quantidade_as = 0;
    scanf("%i", &quantidade_cartas);
    for (int i = 1; i <= quantidade_cartas; i++)
    {
        scanf("%d", &cartas);
        if (cartas == 1)
        {
            total_mao = total_mao + 11;
            quantidade_as = quantidade_as + 1;
        }
        else if (cartas > 10)
        {
            total_mao = total_mao + 10;
        }
        else
        {
            total_mao = total_mao + cartas;
        }
    }
    while ((total_mao > 21) && (quantidade_as > 0))
    {
        total_mao = total_mao - 10;
        quantidade_as = quantidade_as - 1;
    }
    printf("%i", total_mao);
}
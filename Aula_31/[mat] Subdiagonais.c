#include <stdio.h>

int main()
{
    int matriz[5][5];
    int soma = 0;
    int soma2 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == i)
            {
                soma += matriz[i][j];
            }
        }
    }
    for (int i = 5 - 1; i >= 0; i--)
    {
        for (int j = 5 - 1; j >= 0; j--)
        {
            if (i == j)
            {
                soma2 += matriz[i][(5 - 1) - i];
            }
        }
    }
    printf("%d", soma - soma2);
}
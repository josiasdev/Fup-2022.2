#include <stdio.h>

int main()
{
    int matriz[3][3];
    int soma, total, falhou = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    soma = 0;

    for (int i = 0; i < 3; i++)
    {
        soma += matriz[i][i];
    }

    total = soma;
    soma = 0;
    for (int i = 0; i < 3; i++)
    {

        soma += matriz[i][3 - 1 - i];
    }

    if (total != soma)
    {
        falhou = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        soma = 0;
        for (int j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
        if (total != soma)
        {
            falhou = 1;
        }
    }

    for (int j = 0; j < 3; j++)
    {
        soma = 0;
        for (int i = 0; i < 3; i++)
        {
            soma += matriz[i][j];
        }
        if (total != soma)
        {
            falhou = 1;
        }
    }

    if (falhou == 1)
    {
        printf("nao");
    }
    else
    {
        printf("sim");
    }

    return 0;
}
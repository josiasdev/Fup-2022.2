#include <stdio.h>

int main()
{
    int matriz[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    int auxiliar = 1;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] != matriz[j][i])
            {
                auxiliar = 0;
            }
        }
    }
    if (auxiliar == 1)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
}
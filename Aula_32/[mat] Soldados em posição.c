#include <stdio.h>

int main()
{
    int m[3][3], contar = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3 - 1; i++)
        {
            if (m[i][j] > m[i + 1][j])
            {
                contar++;
            }
        }
    }
    printf("%d", contar);
}
#include <stdio.h>

int main()
{
    int vetor[6];
    int matriz[4][4];
    int contador = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
            for (int k = 0; k < 6; k++)
            {
                if (vetor[k] == matriz[i][j])
                {
                    contador++;
                }
            }
        }
    }
    printf("%d", contador);
}
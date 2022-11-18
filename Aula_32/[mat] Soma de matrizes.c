#include <stdio.h>

int main()
{
    int n_linhas, n_colunas;
    scanf("%d %d", &n_linhas, &n_colunas);
    int matrizA[n_linhas][n_colunas], matrizB[n_linhas][n_colunas];
    int soma[n_linhas][n_colunas];
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            soma[i][j] = 0;
            soma[i][j] += matrizA[i][j] + matrizB[i][j];
        }
    }
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
}
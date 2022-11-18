#include <stdio.h>

int main()
{
    int n_linhas, n_colunas, n2_colunas;
    scanf("%d %d %d", &n_linhas, &n_colunas, &n2_colunas);
    int matrizA[n_linhas][n_colunas], matrizB[n_colunas][n2_colunas], produto_matrizes2[n_linhas][n2_colunas];
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (int i = 0; i < n_colunas; i++)
    {
        for (int j = 0; j < n2_colunas; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n2_colunas; j++)
        {
            produto_matrizes2[i][j] = 0;
            for (int k = 0; k < n_colunas; k++)
            {
                produto_matrizes2[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n2_colunas; j++)
        {
            printf("%d ", produto_matrizes2[i][j]);
        }
        printf("\n");
    }
}
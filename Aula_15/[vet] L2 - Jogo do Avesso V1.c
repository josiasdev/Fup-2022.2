#include <stdio.h>

void preencher_vetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}

void gritar(int operarios[], int n, int grito)
{
    for (int i = 0; i < n; i++)
    {
        if (operarios[i] == grito)
        {
            if (i > 0)
            {
                operarios[i - 1] = -operarios[i - 1];
            }
            if (i < n - 1)
            {
                operarios[i + 1] = -operarios[i + 1];
            }
        }
    }
}

void imprimir(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", v[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
}

int main()
{
    int qtd_casos_teste, grito;
    scanf("%d", &qtd_casos_teste);
    scanf("%d", &grito);
    int operarios[qtd_casos_teste];
    preencher_vetor(operarios, qtd_casos_teste);
    gritar(operarios, qtd_casos_teste, grito);
    imprimir(operarios, qtd_casos_teste);
}
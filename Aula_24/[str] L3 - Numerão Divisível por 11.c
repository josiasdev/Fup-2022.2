#include <stdio.h>

int main()
{
    char numero[21];
    scanf("%[^\n]", numero);
    int soma_pares = 0;
    int soma_impares = 0;
    int diferenca;
    for (int i = 0; numero[i]; i++)
    {
        if (i % 2 == 0)
        {
            soma_pares += (numero[i] - '0');
        }
        else
        {
            soma_impares += (numero[i] - '0');
        }
    }
    diferenca = (soma_pares - soma_impares);
    if (diferenca < 0)
    {
        diferenca = -diferenca;
    }
    if (diferenca % 11 == 0)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
}
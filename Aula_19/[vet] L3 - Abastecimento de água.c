#include <stdio.h>

int main()
{
    int qtd_casas, qtd_caminhoes, pontoA, pontoB, qtd_agua;
    scanf("%i %i", &qtd_casas, &qtd_caminhoes);
    int vetor[qtd_casas];
    for (int i = 0; i < qtd_casas; i++)
    {
        vetor[i] = 0;
    }
    for (int i = 0; i < qtd_caminhoes; i++)
    {
        scanf("%i %i %i", &pontoA, &pontoB, &qtd_agua);
        for (int j = pontoA; j <= pontoB; j++)
        {
            vetor[j] = vetor[j] + qtd_agua;
        }
    }
    for (int i = 0; i < qtd_casas; i++)
    {
        printf("%i ", vetor[i]);
    }
}
#include <stdio.h>

void preencher_vetor(int vetor[], int quantidade_dominos)
{
    for (int i = 0; i < quantidade_dominos; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

int esta_ordenado(int vetor[], int quantidade_dominos)
{
    for (int i = 0; i < quantidade_dominos - 1; i++)
    {
        if (vetor[i] > vetor[i + 1])
        {
            return -1;
        }
    }
    return 1;
}

int main()
{
    int quantidade, dominos[100];
    scanf("%d", &quantidade);
    preencher_vetor(dominos, quantidade);
    if (esta_ordenado(dominos, quantidade) == 1)
    {
        printf("ok\n");
    }
    else
    {
        printf("precisa de ajuste\n");
    }
}
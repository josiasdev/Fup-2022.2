#include <stdio.h>

void ordenado(int vetor[], int n)
{
    int auxiliar;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                auxiliar = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
}

int main()
{
    int tamanho_vetor;
    scanf("%d", &tamanho_vetor);
    int vetor[tamanho_vetor];
    for (int i = 0; i < tamanho_vetor; i++)
    {
        scanf("%d", &vetor[i]);
    }
    ordenado(vetor, tamanho_vetor);
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("%d", vetor[i]);
        printf(" ");
    }
}
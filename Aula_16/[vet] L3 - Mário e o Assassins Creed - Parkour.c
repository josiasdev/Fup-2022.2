#include <stdio.h>

int main()
{
    int tamanho_vetor;
    scanf("%i", &tamanho_vetor);
    int vetor[tamanho_vetor];
    for (int i = 0; i < tamanho_vetor; i++)
    {
        scanf("%d", &vetor[i]);
    }
    int contador = 0;
    for (int i = 1; i < tamanho_vetor; i++)
    {
        if ((vetor[i] - vetor[i - 1] >= 2) || (vetor[i] - vetor[i - 1] <= -2))
        {
            contador++;
        }
    }
    printf("%i", contador);
}
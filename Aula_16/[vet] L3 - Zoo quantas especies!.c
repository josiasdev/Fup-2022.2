#include <stdio.h>

int main()
{
    int quantidades_vetor;
    scanf("%d", &quantidades_vetor);
    int vetor[quantidades_vetor];
    int especies_repetidas = 0;
    for (int i = 0; i < quantidades_vetor; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < quantidades_vetor; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                especies_repetidas++;
                break;
            }
        }
    }
    int resultado = quantidades_vetor - especies_repetidas;
    printf("%d", resultado);
}
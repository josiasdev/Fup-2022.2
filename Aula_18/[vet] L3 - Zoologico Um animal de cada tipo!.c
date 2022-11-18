#include <stdio.h>

int main()
{
    int elementos_vetor, auxiliar = 0;
    scanf("%i", &elementos_vetor);
    int vetor[elementos_vetor];
    for (int i = 0; i < elementos_vetor; i++)
    {
        scanf("%i", &vetor[i]);
    }
    for (int i = 0; i < elementos_vetor; i++)
    {
        for (int j = i + 1; j < elementos_vetor; j++)
        {
            if (vetor[i] > vetor[j])
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    printf("%i ", vetor[0]);
    for (int i = 1; i < elementos_vetor; i++)
    {
        if (vetor[i] != vetor[i - 1])
        {
            printf("%i ", vetor[i]);
        }
    }
}
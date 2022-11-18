#include <stdio.h>

int main()
{
    int elementos_vetor;
    scanf("%i", &elementos_vetor);
    float vetor[elementos_vetor];
    float aux;
    for (int i = 0; i < elementos_vetor; i++)
    {
        scanf("%f", &vetor[i]);
    }
    for (int i = 0; i < elementos_vetor; i++)
    {
        for (int j = i + 1; j < elementos_vetor; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    if (elementos_vetor % 2 == 1)
    {
        printf("%.1f", vetor[elementos_vetor / 2]);
    }
    else
    {
        printf("%.1f", (vetor[elementos_vetor / 2] + vetor[elementos_vetor / 2 - 1]) / 2);
    }
}
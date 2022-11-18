#include <stdio.h>

int main()
{
    int quantidade_vetor;
    scanf("%i", &quantidade_vetor);
    int vetor[quantidade_vetor];
    int contador_casal = 0;
    for (int i = 0; i < quantidade_vetor; i++)
    {
        scanf("%i", &vetor[i]);
    }
    for (int i = 0; i < quantidade_vetor; i++)
    {
        for (int j = i + 1; j < quantidade_vetor; j++)
        {
            if (vetor[i] * (-1) == vetor[j] && vetor[i] != 0)
            {
                vetor[i] = vetor[j] = 0;
                contador_casal++;
                break;
            }
        }
    }
    printf("%i", contador_casal);
}
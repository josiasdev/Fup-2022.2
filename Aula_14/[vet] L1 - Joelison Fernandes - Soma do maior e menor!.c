#include <stdio.h>
#include <limits.h>
int main()
{
    int vetor[5];
    int maior = 0;
    int menor = INT_MAX;
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        soma = maior + menor;
    }
    printf("%d", soma);
}
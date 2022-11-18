#include <stdio.h>

void esta_contido(int vetor[], int vetor2[], int n, int n2, int contador)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= n2 - 1; j++)
        {
            if (vetor[i] == vetor2[j])
            {
                contador++;
                break;
            }
        }
    }
    if (contador == n)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
}

int main()
{
    int numero1, numero2;
    scanf("%d", &numero1);
    int vetor1[numero1];
    int contador = 0;
    for (int i = 0; i < numero1; i++)
    {
        scanf("%d", &vetor1[i]);
    }
    scanf("%d", &numero2);
    int vetor2[numero2];
    for (int i = 0; i < numero2; i++)
    {
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < numero1; i++)
    {
        for (int j = 0; j < numero2; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                contador++;
                break;
            }
        }
    }
    if (contador == numero1)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
}
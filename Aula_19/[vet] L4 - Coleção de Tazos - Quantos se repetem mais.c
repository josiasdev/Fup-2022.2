#include <stdio.h>

void preencher_vetor(int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &vetor[i]);
    }
}

void repetidos(int vetor[], int n, int contador, int maior_contador)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[j] == vetor[i])
            {
                contador++;
            }
        }
        if (contador > maior_contador)
        {
            maior_contador = contador;
        }
        contador = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[j] == vetor[i])
            {
                contador++;
            }
        }
        if (contador == maior_contador)
        {
            printf("%i ", vetor[i]);
        }
        contador = 1;
    }
}

int main()
{
    int qtd_elementos_vetor;
    scanf("%i", &qtd_elementos_vetor);
    int vetor[qtd_elementos_vetor];
    int contador = 1;
    int maior_contador = 0;
    preencher_vetor(vetor, qtd_elementos_vetor);
    repetidos(vetor, qtd_elementos_vetor, contador, maior_contador);
}
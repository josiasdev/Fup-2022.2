#include <stdio.h>

int main()
{
    int tamanho_vetor;
    scanf("%d", &tamanho_vetor);
    int vetor[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++)
    {
        scanf("%d", &vetor[i]);
    }
    int new_vetor = 0;
    int potencia = 1;
    for (int i = tamanho_vetor - 1; i >= 0; i--)
    {
        new_vetor = new_vetor + vetor[i] * potencia;
        potencia = potencia * 10;
    }
    printf("%d", new_vetor);
}
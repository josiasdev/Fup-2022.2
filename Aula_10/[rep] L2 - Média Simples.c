#include <stdio.h>

int main()
{
    float quatidade_notas, notas, soma = 0, divisao;
    scanf("%f", &quatidade_notas);
    for (int i = 1; i <= quatidade_notas; i++)
    {
        scanf("%f", &notas);
        soma = (soma + notas);
        divisao = soma / quatidade_notas;
    }
    printf("%.1f", divisao);
}
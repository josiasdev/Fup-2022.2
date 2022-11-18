#include <stdio.h>
#include <limits.h>
int main()
{
    int quantidade_de_juizes, notas_juizes, menor = INT_MAX, maior = 0, soma = 0, auxiliar;
    scanf("%d", &quantidade_de_juizes);
    for (int i = 0; i < quantidade_de_juizes; i++)
    {
        scanf("%i", &notas_juizes);
        soma = soma + notas_juizes;
        if (menor > notas_juizes)
        {
            menor = notas_juizes;
        }
        if (maior < notas_juizes)
        {
            maior = notas_juizes;
        }
    }
    auxiliar = maior + menor;
    soma = soma - auxiliar;
    printf("%d", soma);
}
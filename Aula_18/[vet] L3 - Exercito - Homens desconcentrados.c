#include <stdio.h>

int main()
{
    int qtd_elementos_no_vetor;
    scanf("%d", &qtd_elementos_no_vetor);
    int vetor[qtd_elementos_no_vetor];
    int contador = 0;
    for (int i = 0; i < qtd_elementos_no_vetor; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] == 0)
        {
            contador++;
        }
    }
    for (int i = 0; i < qtd_elementos_no_vetor; i++)
    {
        if ((vetor[i] == 0) && ((i > 0 && vetor[i - 1] == 1) || (i < qtd_elementos_no_vetor - 1 && vetor[i + 1] == 1)))
        {
            contador--;
        }
    }
    printf("%d", contador);
}
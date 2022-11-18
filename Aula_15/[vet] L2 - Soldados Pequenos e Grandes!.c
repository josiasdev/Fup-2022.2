#include <stdio.h>

double media(double vetor_altura[], int quantidade_soldados)
{
    double soma_alturas = 0;
    for (int i = 0; i < quantidade_soldados; i++)
    {
        soma_alturas = soma_alturas + vetor_altura[i];
    }
    double media_alturas = soma_alturas / quantidade_soldados;
    return media_alturas;
}
void indentifica_tamanho(double vetor_altura[], double media_alturas, int quantidade_soldados)
{
    for (int i = 0; i < quantidade_soldados; i++)
    {
        if (vetor_altura[i] > media_alturas)
        {
            printf("G ");
        }
        else if (vetor_altura[i] < media_alturas)
        {
            printf("P ");
        }
        else
        {
            printf("M ");
        }
    }
}
int main()
{
    int quantidades_soldados;
    scanf("%i", &quantidades_soldados);
    double vetor_altura[quantidades_soldados];
    double media_alturas;
    for (int i = 0; i < quantidades_soldados; i++)
    {
        scanf("%lf", &vetor_altura[i]);
    }
    media_alturas = media(vetor_altura, quantidades_soldados);
    printf("%.2f\n", media_alturas);
    indentifica_tamanho(vetor_altura, media_alturas, quantidades_soldados);
}
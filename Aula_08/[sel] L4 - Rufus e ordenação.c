#include <stdio.h>

int main()
{
    int tamanho1, tamanho2, tamanho3;
    scanf("%d %d %d", &tamanho1, &tamanho2, &tamanho3);
    if ((tamanho1 > tamanho2) && (tamanho1 > tamanho3))
    {
        printf("G ");
    }
    else if ((tamanho1 < tamanho2) && (tamanho1 < tamanho3))
    {
        printf("P ");
    }
    else
    {
        printf("M ");
    }
    if ((tamanho2 > tamanho3) && (tamanho2 > tamanho1))
    {
        printf("G ");
    }
    else if ((tamanho2 < tamanho3) && (tamanho2 < tamanho1))
    {
        printf("P ");
    }
    else
    {
        printf("M ");
    }
    if ((tamanho3 > tamanho1) && (tamanho3 > tamanho2))
    {
        printf("G ");
    }
    else if ((tamanho3 < tamanho1) && (tamanho3 < tamanho2))
    {
        printf("P ");
    }
    else
    {
        printf("M ");
    }
}
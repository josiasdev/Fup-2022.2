#include <stdio.h>

int main()
{
    // dimensao 1 A
    // dimensao 2 B
    // dimensao 3 C
    //  altura H
    //  largura L
    int dimensao1, dimensao2, dimensao3, altura, largura;
    scanf("%i %i %i %i %i", &dimensao1, &dimensao2, &dimensao3, &altura, &largura);
    if (((dimensao1 <= altura && dimensao2 <= largura) || (dimensao2 <= altura && dimensao1 <= largura) || (dimensao1 <= altura && dimensao3 <= largura) || (dimensao3 <= altura && dimensao1 <= largura) || (dimensao2 <= altura && dimensao3 <= largura) || (dimensao3 <= altura && dimensao2 <= largura)))
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
}
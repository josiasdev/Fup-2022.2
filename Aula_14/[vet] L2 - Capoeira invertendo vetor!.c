#include <stdio.h>



void inverter_vetor(int quantidade)
{
    int vet[quantidade];
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (int i = quantidade - 1; i >= 0; i--)
    {
        printf("%d",vet[i]);
        printf(" ");
    }
}



int main()
{
    int quantidade_elementos;
    scanf("%d", &quantidade_elementos);
    inverter_vetor(quantidade_elementos);
}
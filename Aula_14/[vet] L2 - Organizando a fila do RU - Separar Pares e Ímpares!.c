#include <stdio.h>

int main()
{
    int quantidades_elementos;

    scanf("%d", &quantidades_elementos);
    int vet[quantidades_elementos];
    for (int i = 0; i < quantidades_elementos; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 1)
        {
            printf("%i ", vet[i]);
        }
    }
    printf("\n");
    for (int i = 0; i <= quantidades_elementos - 1; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%i ", vet[i]);
        }
    }
}
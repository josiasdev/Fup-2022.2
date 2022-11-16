#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, numero4, numero5;
    scanf("%i %i %i %i %i", &numero1, &numero2, &numero3, &numero4, &numero5);
    int menor = numero1;
    for (int i = 1; i <= numero1; i++)
    {
        if (menor > numero2)
        {
            menor = numero2;
        }
        else if (menor > numero3)
        {
            menor = numero3;
        }
        else if (menor > numero4)
        {
            menor = numero4;
        }
        else if (menor > numero5)
        {
            menor = numero5;
        }
    }
    printf("%i", menor);
}
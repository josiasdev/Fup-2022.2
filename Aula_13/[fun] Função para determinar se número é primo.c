#include <stdio.h>

int primo(int numeros)
{
    for (int i = 2; i <= numeros - 1; i++)
    {
        if (numeros % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int numero1, numero2;
    scanf("%d %d", &numero1, &numero2);
    for (int i = numero1; i <= numero2; i++)
    {
        if (primo(i))
        {
            printf("%d\n", i);
        }
    }
}
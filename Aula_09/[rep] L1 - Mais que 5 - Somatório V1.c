#include <stdio.h>

int main()
{
    int numeroA, numeroB, soma = 0;
    scanf("%d %d", &numeroA, &numeroB);
    if (numeroA > numeroB)
    {
        printf("invalido");
    }
    else
    {
        for (int i = numeroA; i <= numeroB; i++)
        {
            if (i % i == 0)
            {
                soma = soma + i;
            }
        }
        printf("%d", soma);
    }
}
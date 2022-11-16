#include <stdio.h>

int main()
{
    int numero1, numero2, soma_par = 0;
    scanf("%d %d", &numero1, &numero2);
    if (numero2 < numero1)
    {
        printf("invalido");
    }
    else
    {
        for (int i = numero1; i <= numero2; i++)
        {
            if (i % 2 == 0)
            {
                soma_par = soma_par + i;
            }
        }
        printf("%d", soma_par);
    }
}
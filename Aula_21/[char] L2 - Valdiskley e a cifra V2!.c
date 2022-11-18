#include <stdio.h>

int main()
{
    char letra, operacao, letra2;
    int n_n;
    scanf(" %c %c %c", &letra, &operacao, &letra2);

    n_n = letra2 - 'a';

    if (operacao == '-')
    {
        n_n = -n_n;
    }

    if (n_n > 0)
    {
        for (int i = 0; i < n_n; i++)
        {
            letra = letra + 1;
            if (letra > 'z')
            {
                letra = 'a';
            }
        }
    }
    else
    {
        for (int i = 0; i < -n_n; i++)
        {
            letra = letra - 1;
            if (letra < 'a')
            {
                letra = 'z';
            }
        }
    }
    printf("%c", letra);
}
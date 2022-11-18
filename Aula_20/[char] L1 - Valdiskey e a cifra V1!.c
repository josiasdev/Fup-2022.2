#include <stdio.h>

int main()
{
    char letra;
    int rotacao;
    scanf("%c", &letra);
    scanf("%d", &rotacao);
    if (rotacao > 0)
    {
        for (int i = 0; i < rotacao; i++)
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
        for (int i = 0; i < -rotacao; i++)
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
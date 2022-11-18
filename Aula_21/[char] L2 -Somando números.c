#include <stdio.h>

int main()
{
    char palavra = '0';
    int soma = 0;
    int auxiliar = 0;
    while (palavra != '\n')
    {
        scanf("%c", &palavra);
        if (palavra >= '0' && palavra <= '9')
        {
            auxiliar = 10 * auxiliar + (palavra - '0');
        }
        else
        {
            soma += auxiliar;
            auxiliar = 0;
        }
    }
    printf("%d", soma);
}
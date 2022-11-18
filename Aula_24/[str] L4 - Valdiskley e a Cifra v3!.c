#include <stdio.h>

int main()
{
    char palavras[100], chaveiro[100], operacao;
    char c;
    int i;
    int j = 0;
    int k;
    char rotacao;
    scanf("%[^\n] %s %c", palavras, chaveiro, &operacao);
    for (i = 0; palavras[i]; i++)
    {
        if ((palavras[i] >= 'a') && (palavras[i] <= 'z'))
        {
            c = palavras[i];
            rotacao = chaveiro[j] - 'a';
            if (operacao == '+')
            {
                for (k = 1; k <= rotacao; k++)
                {
                    c++;
                    if (c > 'z')
                    {
                        c = 'a';
                    }
                }
            }
            else
            {
                for (k = 1; k <= rotacao; k++)
                {
                    c--;
                    if (c < 'a')
                    {
                        c = 'z';
                    }
                }
            }
            printf("%c", c);
            j++;
            if (chaveiro[j] == 0)
            {
                j = 0;
            }
        }
        else
        {
            printf("%c", palavras[i]);
        }
    }
}
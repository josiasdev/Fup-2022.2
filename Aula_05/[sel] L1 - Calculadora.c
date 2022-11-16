#include <stdio.h>

int main()
{
    char c;
    int numero, numero2;
    scanf("%d %d %c", &numero, &numero2, &c);
    if (c == '+')
    {
        int soma = numero + numero2;
        printf("%d", soma);
    }
    else if (c == '-')
    {
        int subtracao = numero - numero2;
        printf("%d", subtracao);
    }
    else if (c == '*')
    {
        int multiplicacao = numero * numero2;
        printf("%d", multiplicacao);
    }
    else if (c == '/')
    {
        if (numero2 == 0)
        {
            printf("invalida");
        }
        else
        {
            int divisao = numero / numero2;
            printf("%d", divisao);
        }
    }
    else
    {
        printf("invalida");
    }
}
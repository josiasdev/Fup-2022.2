#include <stdio.h>

int main()
{
    char texto;
    int soma = 0;
    scanf("%c", &texto);
    while (texto != '\n')
    {
        soma += texto;
        scanf("%c", &texto);
    }
    soma = soma % 50;

    printf("%d", soma);
}
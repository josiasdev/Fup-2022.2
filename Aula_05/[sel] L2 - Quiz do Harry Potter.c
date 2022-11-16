#include <stdio.h>

int main()
{
    char resposta, resposta2, resposta3, resposta4;
    scanf("%c %c %c %c", &resposta, &resposta2, &resposta3, &resposta4);
    int contador = 0;

    if (resposta == 'd')
    {
        contador++;
    }
    if (resposta2 == 'a')
    {
        contador++;
    }
    if (resposta3 == 'c')
    {
        contador++;
    }
    if (resposta4 == 'd')
    {
        contador++;
    }
    if (contador == 0)
    {
        printf("Nunca assistiu");
    }
    if (contador == 1)
    {
        printf("Ja ouviu falar");
    }
    if (contador == 2)
    {
        printf("Interessado no assunto");
    }
    if (contador == 3)
    {
        printf("Fa");
    }
    if (contador == 4)
    {
        printf("Super fa");
    }
}
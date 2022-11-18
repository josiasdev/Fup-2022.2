#include <stdio.h>
#include <string.h>
int main()
{
    char codigo_ultron[100], codigos_pessoas[100];
    scanf("%s", codigo_ultron);
    while (scanf("%s", codigos_pessoas) == 1)
    {
        int contador = 0;
        for (int i = 0; codigos_pessoas[i]; i++)
        {
            for (int j = 0; codigo_ultron[j]; j++)
            {
                if (codigo_ultron[j] == codigos_pessoas[i])
                {
                    contador++;
                }
            }
        }
        if (contador == strlen(codigos_pessoas))
        {
            printf("chefe ");
        }
        else if (contador > strlen(codigos_pessoas) / 2)
        {
            printf("ultron ");
        }
        else
        {
            printf("pessoa ");
        }
    }
}
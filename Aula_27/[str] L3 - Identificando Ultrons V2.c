#include <stdio.h>
#include <string.h>
int main()
{
    int testes;
    char codigo_ultron[100];
    char codigo_pessoa[100];
    scanf("%i", &testes);
    int contador = 0;
    for (int i = 0; i < testes; i++)
    {
        scanf("%s %s", codigo_ultron, codigo_pessoa);
        for (int i = 0; codigo_pessoa[i]; i++)
        {

            for (int j = 0; codigo_ultron[j]; j++)
            {
                if (codigo_ultron[j] == codigo_pessoa[i])
                {
                    contador++;
                }
            }
        }
        if (contador == strlen(codigo_pessoa))
        {
            printf("chefe\n");
        }
        else if (contador > strlen(codigo_pessoa) / 2)
        {
            printf("ultron\n");
        }
        else
        {
            printf("pessoa\n");
        }
        contador = 0;
    }
}
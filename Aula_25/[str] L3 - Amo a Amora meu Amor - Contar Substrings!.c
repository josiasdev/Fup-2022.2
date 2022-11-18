#include <stdio.h>
#include <string.h>
int main()
{
    char texto[100], texto2[100];
    int contador;
    int numero_strings = 0;
    scanf("%[^\n] %[^\n]", texto, texto2);
    for (int i = 0; texto[i]; i++)
    {
        contador = 0;
        for (int j = 0; texto2[j]; j++)
        {
            if (i + j < strlen(texto) && texto2[j] == texto[i + j])
            {
                contador++;
            }
        }
        if (contador == strlen(texto2))
        {
            numero_strings++;
        }
    }
    printf("%d", numero_strings);
}
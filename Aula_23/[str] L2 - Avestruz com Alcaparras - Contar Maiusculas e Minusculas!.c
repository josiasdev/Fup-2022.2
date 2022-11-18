#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    char letra;
    int contador = 0;
    scanf("%[^\n] %c", frase, &letra);
    for (int i = 0; frase[i]; i++)
    {
        if (letra >= 'a' && letra <= 'z')
        {
            letra = letra - 32;
        }
        if (frase[i] == letra)
        {
            contador++;
        }
    }
    for (int i = 0; frase[i]; i++)
    {
        if (letra >= 'A' && letra <= 'Z')
        {
            letra = letra + 32;
        }
        if (letra == frase[i])
        {
            contador++;
        }
    }
    printf("%d", contador);
}
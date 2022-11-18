#include <stdio.h>

int main()
{
    char frase[100];
    char letra;
    int contador = 0;
    scanf("%[^\n] %c", frase, &letra);
    for (int i = 0; frase[i]; i++)
    {
        if (letra == frase[i])
        {
            contador++;
        }
    }
    printf("%d", contador);
}
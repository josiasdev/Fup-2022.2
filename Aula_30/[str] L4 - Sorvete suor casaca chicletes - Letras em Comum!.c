#include <stdio.h>
#include <string.h>
int main()
{
    char frase[101], aux;
    int contador = 0;

    scanf("%[^\n]", frase);
    for (int aux = 'a'; aux <= 'z'; aux++)
    {
        int na_palavra = 0;
        int em_todas = 1;
        for (int i = 0; i == 0 || frase[i - 1]; i++)
        {
            if (frase[i] == ' ' || frase[i] == 0)
            {
                if (na_palavra == 0)
                {
                    em_todas = 0;
                    break;
                }
                else
                {
                    na_palavra = 0;
                }
                while (frase[i + 1] == ' ')
                {
                    i++;
                }
            }
            else if (frase[i] == aux)
            {
                na_palavra = 1;
            }
        }
        if (em_todas == 1)
        {
            contador++;
        }
    }
    printf("%d", contador);
}
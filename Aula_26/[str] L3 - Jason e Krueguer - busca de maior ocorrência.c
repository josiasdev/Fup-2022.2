#include <stdio.h>

int main()
{
    int testes;
    char frase[100];
    scanf("%i", &testes);
    int contador;
    int maior;
    for (int j = 0; j < testes; j++)
    {
        scanf(" %[^\n]", frase);
        contador = 0;
        maior = 0;
        for (int i = 0; frase[i]; i++)
        {
            if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            {
                contador++;
                if (contador > maior)
                {
                    maior = contador;
                }
            }
            else
            {
                contador = 0;
            }
        }
        contador = 0;
        for (int i = 0; frase[i]; i++)
        {
            if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            {
                contador++;
                if (contador == maior)
                {
                    for (int k = i - maior + 1; k <= i; k++)
                    {
                        printf("%c", frase[k]);
                    }
                    break;
                }
            }
            else
            {
                contador = 0;
            }
        }

        printf("\n");
    }
}
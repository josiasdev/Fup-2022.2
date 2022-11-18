#include <stdio.h>

int main()
{
    int testes;
    char textos[100];
    scanf("%i", &testes);
    int prox_maiuscula;
    for (int i = 0; i < testes; i++)
    {
        scanf(" %[^\n]", textos);

        if (textos[0] >= 'a' && textos[0] <= 'z')
        {
            prox_maiuscula = 1;
        }
        else
        {
            prox_maiuscula = 0;
        }

        for (int j = 1; textos[j]; j++)
        {
            if (prox_maiuscula == 1 && textos[j] >= 'a' && textos[j] <= 'z')
            {
                textos[j] = textos[j] - 32;
            }
            if (prox_maiuscula == 0 && textos[j] >= 'A' && textos[j] <= 'Z')
            {
                textos[j] = textos[j] + 32;
            }
            if (textos[j] != ' ')
            {
                prox_maiuscula = 1 - prox_maiuscula;
            }
        }
        printf("%s\n", textos);
    }
}
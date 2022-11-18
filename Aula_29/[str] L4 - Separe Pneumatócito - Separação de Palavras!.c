#include <stdio.h>

int vogais_do_texto(char texto)
{
    return texto == 'a' || texto == 'e' || texto == 'i' || texto == 'o' || texto == 'u' || texto == 'A' || texto == 'E' || texto == 'I' || texto == 'O' || texto == 'U';
}

int letras_do_texto(char texto)
{
    return (texto >= 'a' && texto <= 'z') || (texto >= 'A' && texto <= 'Z');
}

int consoantes_do_texto(char c)
{
    return letras_do_texto(c) && !vogais_do_texto(c);
}

int main()
{
    char texto[100];

    scanf("%[^\n]", texto);

    for (int i = 0; texto[i] != 0; i++)
    {
        printf("%c", texto[i]);
        if (vogais_do_texto(texto[i]) && consoantes_do_texto(texto[i + 1]))
        {
            printf("-");
        }
    }
}
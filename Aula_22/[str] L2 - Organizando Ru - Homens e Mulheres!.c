#include <stdio.h>

int main()
{
    char frase[100];
    scanf("%[^\n]", frase);
    for (int i = 0; frase[i] != 0; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            printf("%c", frase[i]);
        }
    }
    printf("\n");
    for (int i = 0; frase[i] != 0; i++)
    {
        if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != ' ')
        {
            printf("%c", frase[i]);
        }
    }
}
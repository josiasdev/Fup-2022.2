#include <stdio.h>

int main()
{
    char frase[100];
    scanf("%[^\n]", frase);
    for (int i = 0; frase[i] != 0; i++)
    {
        if (frase[i] >= 'A' && frase[i] <= 'Z')
        {
            frase[i] = frase[i] + 32;
        }
    }
    for (int i = 0; frase[i] != 0; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            printf("v");
        }
        else if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != ' ')
        {
            printf("c");
        }
        else
        {
            printf(" ");
        }
    }
}
#include <stdio.h>

int main()
{
    char frase[201];
    scanf("%[^\n]", frase);
    for (int i = 0; frase[i]; i++)
    {
        if ((frase[i] != ' ') || (i > 0 && frase[i] == ' ' && frase[i - 1] != ' '))
        {
            printf("%c", frase[i]);
        }
    }
}
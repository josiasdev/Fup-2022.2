#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    scanf("%[^\n]", frase);
    for (int i = strlen(frase) - 1; i >= 0; i--)
    {
        printf("%c", frase[i]);
    }
}
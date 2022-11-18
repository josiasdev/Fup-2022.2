#include <stdio.h>

int main()
{
    char frase[101];
    while (scanf("%s", frase) > 0)
    {
        printf("%s %s ", frase, frase);
    }
}

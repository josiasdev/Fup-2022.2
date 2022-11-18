#include <stdio.h>
#include <string.h>
int main()
{
    char frase[102], anterior_frase[102];
    int frase_ordenada = 1;
    while (scanf("%s", frase) > 0)
    {
        if (strcmp(anterior_frase, frase) > 0)
        {
            frase_ordenada = 0;
            break;
        }
        strcpy(anterior_frase, frase);
    }
    if (frase_ordenada)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
}
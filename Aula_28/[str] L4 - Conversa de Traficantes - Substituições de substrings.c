#include <stdio.h>
#include <string.h>
int main()
{
    char texto[100], palavra[100], substituicao[100];
    scanf("%[^\n] %[^\n] %[^\n]", texto, palavra, substituicao);
    int encontrou;
    for (int i = 0; texto[i]; i++)
    {
        encontrou = 1;
        for (int j = 0; palavra[j]; j++)
        {
            if (palavra[j] != texto[i + j])
            {
                encontrou = 0;
            }
        }
        if (encontrou == 1)
        {
            printf("%s", substituicao);
            i = i + strlen(palavra) - 1;
        }
        else if (encontrou == 0)
        {
            printf("%c", texto[i]);
        }
    }
    // encontrou == 1 é verdadeiro em booleano
    // encontrou == 0 é falso em booleano
}
#include <stdio.h>

int main()
{
    char nome;
    scanf("%c", &nome);
    int soma = 0;
    while (nome != '\n')
    {
        soma = soma + nome;
        scanf("%c", &nome);
    }
    char melhor_c = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        if ((soma + c) % 50 == 0)
        {
            melhor_c = c;
        }
    }
    if (melhor_c == 0)
    {
        printf("sem sorte");
    }
    else
    {
        printf("%c", melhor_c);
    }
}
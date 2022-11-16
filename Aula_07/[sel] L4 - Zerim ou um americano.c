#include <stdio.h>

int main()
{
    int jogador1, jogador2, jogador3, jogador4;
    scanf("%d %d %d %d", &jogador1, &jogador2, &jogador3, &jogador4);
    int soma = (jogador1 + jogador2 + jogador3 + jogador4);
    if (soma == 0)
    {
        printf("nenhum");
    }
    else if (soma % 4 == 1)
    {
        printf("jog1");
    }
    else if (soma % 4 == 2)
    {
        printf("jog2");
    }
    else if (soma % 4 == 3)
    {
        printf("jog3");
    }
    else
    {
        printf("jog4");
    }
}
#include <stdio.h>

int main()
{
    // r - pedra
    // p - papel
    // s - tesoura
    char jogador1, jogador2;
    scanf("%c %c", &jogador1, &jogador2);
    if (jogador1 == 'r' && jogador2 == 'p')
    {
        printf("jog2");
    }
    else if (jogador1 == 'R' && jogador2 == 'P')
    {
        printf("jog2");
    }

    else if (jogador2 == 'r' && jogador1 == 'p')
    {
        printf("jog1");
    }
    else if (jogador2 == 'R' && jogador1 == 'P')
    {
        printf("jog1");
    }

    else if (jogador1 == 'S' && jogador2 == 'P')
    {
        printf("jog1");
    }
    else if (jogador1 == 's' && jogador2 == 'p')
    {
        printf("jog1");
    }

    else if (jogador2 == 'S' && jogador1 == 'P')
    {
        printf("jog2");
    }
    else if (jogador2 == 's' && jogador1 == 'p')
    {
        printf("jog2");
    }
    else if (jogador1 == 'R' && jogador2 == 'S')
    {
        printf("jog1");
    }
    else if (jogador1 == 'r' && jogador2 == 's')
    {
        printf("jog1");
    }
    else if (jogador2 == 'R' && jogador1 == 'S')
    {
        printf("jog2");
    }
    else if (jogador2 == 'r' && jogador1 == 's')
    {
        printf("jog2");
    }
    else if (jogador1 == 'S' && jogador2 == 'S')
    {
        printf("empate");
    }
    else if (jogador1 == 's' && jogador2 == 's')
    {
        printf("empate");
    }
    else if (jogador1 == 'P' && jogador2 == 'P')
    {
        printf("empate");
    }
    else if (jogador1 == 'p' && jogador2 == 'p')
    {
        printf("empate");
    }
    else if (jogador1 == 'R' && jogador2 == 'R')
    {
        printf("empate");
    }
    else if (jogador1 == 'r' && jogador2 == 'r')
    {
        printf("empate");
    }
}
#include <stdio.h>

int main()
{
    // r - pedra
    // p - papel
    // s - tesoura
    // l - lagarto
    // k - spock
    char jogador1, jogador2;
    scanf("%c %c", &jogador1, &jogador2);
    if (jogador1 == 'S' && jogador2 == 'P')
    {
        printf("jog1");
    }
    else if (jogador2 == 'S' && jogador1 == 'P')
    {
        printf("jog2");
    }

    else if (jogador1 == 'P' && jogador2 == 'R')
    {
        printf("jog1");
    }
    else if (jogador2 == 'P' && jogador1 == 'R')
    {
        printf("jog2");
    }

    else if (jogador1 == 'R' && jogador2 == 'L')
    {
        printf("jog1");
    }
    else if (jogador2 == 'R' && jogador1 == 'L')
    {
        printf("jog2");
    }
    // 3

    else if (jogador1 == 'L' && jogador2 == 'K')
    {
        printf("jog1");
    }
    else if (jogador2 == 'L' && jogador1 == 'K')
    {
        printf("jog2");
    }

    // 4

    else if (jogador1 == 'K' && jogador2 == 'S')
    {
        printf("jog1");
    }
    else if (jogador2 == 'K' && jogador1 == 'S')
    {
        printf("jog2");
    }

    // 5

    else if (jogador1 == 'S' && jogador2 == 'L')
    {
        printf("jog1");
    }
    else if (jogador2 == 'S' && jogador1 == 'L')
    {
        printf("jog2");
    }

    // 6

    else if (jogador1 == 'L' && jogador2 == 'P')
    {
        printf("jog1");
    }
    else if (jogador2 == 'L' && jogador1 == 'P')
    {
        printf("jog2");
    }

    // 7

    else if (jogador1 == 'P' && jogador2 == 'K')
    {
        printf("jog1");
    }
    else if (jogador2 == 'P' && jogador1 == 'K')
    {
        printf("jog2");
    }

    // 8

    else if (jogador1 == 'K' && jogador2 == 'R')
    {
        printf("jog1");
    }
    else if (jogador2 == 'K' && jogador1 == 'R')
    {
        printf("jog2");
    }

    // 9

    else if (jogador1 == 'R' && jogador2 == 'S')
    {
        printf("jog1");
    }
    else if (jogador2 == 'R' && jogador1 == 'S')
    {
        printf("jog2");
    }

    // 10

    else if (jogador1 == 'L' && jogador2 == 'L')
    {
        printf("empate");
    }
    else if (jogador1 == 'K' && jogador2 == 'K')
    {
        printf("empate");
    }

    else if (jogador1 == 'R' && jogador2 == 'R')
    {
        printf("empate");
    }
    else if (jogador1 == 'P' && jogador2 == 'P')
    {
        printf("empate");
    }

    else if (jogador1 == 'S' && jogador2 == 'S')
    {
        printf("empate");
    }
}
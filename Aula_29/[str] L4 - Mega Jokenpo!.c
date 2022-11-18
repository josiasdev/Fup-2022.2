#include <stdio.h>
#include <string.h>

int main()
{

    char texto[15], texto2[15];
    int contador = 0;
    int contador2 = 0;
    scanf("%s %s", texto, texto2);

    if (strcmp(texto, "rock") == 0)
    {
        contador = 0;
    }
    if (strcmp(texto, "fire") == 0)
    {
        contador = 1;
    }
    if (strcmp(texto, "scissors") == 0)
    {
        contador = 2;
    }
    if (strcmp(texto, "human") == 0)
    {
        contador = 3;
    }
    if (strcmp(texto, "sponge") == 0)
    {
        contador = 4;
    }
    if (strcmp(texto, "paper") == 0)
    {
        contador = 5;
    }
    if (strcmp(texto, "air") == 0)
    {
        contador = 6;
    }
    if (strcmp(texto, "water") == 0)
    {
        contador = 7;
    }
    if (strcmp(texto, "gun") == 0)
    {
        contador = 8;
    }

    if (strcmp(texto2, "rock") == 0)
    {
        contador2 = 0;
    }
    if (strcmp(texto2, "fire") == 0)
    {
        contador2 = 1;
    }
    if (strcmp(texto2, "scissors") == 0)
    {
        contador2 = 2;
    }
    if (strcmp(texto2, "human") == 0)
    {
        contador2 = 3;
    }
    if (strcmp(texto2, "sponge") == 0)
    {
        contador2 = 4;
    }
    if (strcmp(texto2, "paper") == 0)
    {
        contador2 = 5;
    }
    if (strcmp(texto2, "air") == 0)
    {
        contador2 = 6;
    }
    if (strcmp(texto2, "water") == 0)
    {
        contador2 = 7;
    }
    if (strcmp(texto2, "gun") == 0)
    {
        contador2 = 8;
    }

    if (contador == contador2)
    {
        printf("empate\n");
    }
    else
    {
        if (contador2 == (contador + 1) % 9 || contador2 == (contador + 2) % 9 || contador2 == (contador + 3) % 9 || contador2 == (contador + 4) % 9)
        {
            printf("jog1\n");
        }
        else
        {
            printf("jog2\n");
        }
    }
}
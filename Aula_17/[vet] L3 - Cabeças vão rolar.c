#include <stdio.h>

int main()
{
    int numero_participantes;
    int comeca_jogo;
    scanf("%i %i", &numero_participantes, &comeca_jogo);
    int vetor[numero_participantes];
    for (int i = 0; i < numero_participantes; i++)
    {
        vetor[i] = 1;
    }
    if (comeca_jogo == numero_participantes)
    {
        comeca_jogo = 0;
    }
    for (int i = 1; i < numero_participantes; i++)
    {
        vetor[comeca_jogo] = 0;
        for (; vetor[comeca_jogo] == 0;)
        {
            comeca_jogo = (comeca_jogo + 1) % numero_participantes;
        }
        comeca_jogo = (comeca_jogo + 1) % numero_participantes;
        for (; vetor[comeca_jogo] == 0;)
        {
            comeca_jogo = (comeca_jogo + 1) % numero_participantes;
        }
    }
    for (int i = 0; i < numero_participantes; i++)
    {

        if (vetor[i] == 1)
        {
            printf("%d", i + 1);
        }
    }
}
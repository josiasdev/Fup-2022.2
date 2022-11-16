#include <stdio.h>

int main()
{
    int capacidade_onibus, quantidade_de_pessoas, ocupacao = 0;
    scanf("%i", &capacidade_onibus);
    while (ocupacao < 2 * capacidade_onibus)
    {
        scanf("%i ", &quantidade_de_pessoas);
        ocupacao = ocupacao + quantidade_de_pessoas;
        if (ocupacao == 0)
        {
            printf("vazio\n");
        }
        else if (ocupacao < capacidade_onibus)
        {
            printf("ainda cabe\n");
        }
        else if (ocupacao < capacidade_onibus * 2)
        {
            printf("lotado\n");
        }
        else
        {
            printf("hora de partir\n");
        }
    }
}
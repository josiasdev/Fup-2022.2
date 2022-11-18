#include <stdio.h>

int main()
{
    int quantidade_produtos, i;
    scanf("%d", &quantidade_produtos);
    float valor_produto[quantidade_produtos];
    float chute[quantidade_produtos];
    char escolha[quantidade_produtos];
    int acertos1 = 0;
    int acertos2 = 0;
    for (i = 0; i < quantidade_produtos; i++)
    {
        scanf("%f", &valor_produto[i]);
    }
    for (i = 0; i < quantidade_produtos; i++)
    {
        scanf("%f", &chute[i]);
    }
    for (i = 0; i < quantidade_produtos; i++)
    {
        scanf(" %c ", &escolha[i]);
    }
    for (int i = 0; i < quantidade_produtos; i++)
    {
        if (((chute[i] == valor_produto[i])) || ((chute[i] < valor_produto[i] && escolha[i] == 'm')) || ((chute[i] > valor_produto[i] && escolha[i] == 'M')))
        {
            acertos1++;
        }
        else
        {
            acertos2++;
        }
    }
    if (acertos1 == acertos2)
    {
        printf("empate");
    }
    else if (acertos1 > acertos2)
    {
        printf("primeiro");
    }
    else
    {
        printf("segundo");
    }
}
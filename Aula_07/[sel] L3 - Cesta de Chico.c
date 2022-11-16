#include <stdio.h>

int main()
{
    int capacidade_cesta, quantidade_bananas, quantidade_goiaba, quantidade_manga;
    scanf("%i %i %i %i", &capacidade_cesta, &quantidade_bananas, &quantidade_goiaba, &quantidade_manga);
    int formula = (quantidade_bananas + quantidade_goiaba + quantidade_manga + 1) / capacidade_cesta;
    int minuto = 1;
    if (formula < 2)
    {
        printf("%i", minuto);
    }
    if ((formula < capacidade_cesta) && (formula >= 2))
    {
        formula = formula + 1;
        printf("%i", formula);
    }
    if ((formula == capacidade_cesta) && (formula <= 2))
    {
        printf("%i", minuto);
    }
    if ((formula > capacidade_cesta) && (formula >= 2))
    {
        printf("%i", formula);
    }
    if (formula == capacidade_cesta)
    {
        printf("%i", formula);
    }
}
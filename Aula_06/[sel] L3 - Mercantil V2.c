#include <stdio.h>

int main()
{
    float primeiro, valor_produto;
    char segundo;
    scanf("%f %c %f", &primeiro, &segundo, &valor_produto);
    if (primeiro < 0)
    {
        primeiro = -primeiro;
    }
    if (valor_produto < 0)
    {
        valor_produto = -valor_produto;
    }
    if ((valor_produto < primeiro) && (segundo == 'M'))
    {
        printf("primeiro");
    }
    else if ((valor_produto < primeiro) && (segundo == 'm'))
    {
        printf("segundo");
    }
    else if ((valor_produto > primeiro) && (segundo == 'M'))
    {
        printf("segundo");
    }
    else if ((valor_produto > primeiro) && (segundo == 'm'))
    {
        printf("primeiro");
    }
}
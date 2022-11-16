#include <stdio.h>

int main()
{
    int valor_produto, primeiro, segundo;
    scanf("%i %i %i", &valor_produto, &primeiro, &segundo);
    int diferenca, diferenca2;
    diferenca = primeiro - valor_produto;
    diferenca2 = segundo - valor_produto;
    if (diferenca < 0)
    {
        diferenca = -diferenca;
    }
    if (diferenca2 < 0)
    {
        diferenca2 = -diferenca2;
    }
    if (diferenca < diferenca2)
    {
        printf("primeiro");
    }
    else if (diferenca > diferenca2)
    {
        printf("segundo");
    }
    else
    {
        printf("empate");
    }
}
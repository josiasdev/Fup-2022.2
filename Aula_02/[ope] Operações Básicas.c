#include <stdio.h>

int main()
{
    int numero1;
    int numero2;

    scanf("%d %d", &numero1, &numero2);

    int soma = numero1 + numero2;

    int subtracao = numero1 - numero2;

    int multiplicacao = numero1 * numero2;

    float divisao = (float)numero1 / (float)numero2;

    int resto = numero1 % numero2;

    printf("%d\n%d\n%d\n%.2f\n%d\n", soma, subtracao, multiplicacao, divisao, resto);
}
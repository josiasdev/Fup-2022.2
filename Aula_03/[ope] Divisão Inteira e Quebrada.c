#include <stdio.h>

int main()
{
    int numero1;
    int numero2;

    scanf("%d %d", &numero1, &numero2);

    int divisao_inteira = numero1 / numero2;
    int resto_divisao = numero1 % numero2;
    float divisao_quebrada = (float)numero1 / (float)numero2;

    printf("%d\n%d\n%.2f\n", divisao_inteira, resto_divisao, divisao_quebrada);
}
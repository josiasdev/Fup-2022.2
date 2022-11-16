#include <stdio.h>

int main()
{
    int numero_4_digitos;
    scanf("%d", &numero_4_digitos);

    int digito1 = numero_4_digitos / 1000;
    int digito2 = (numero_4_digitos / 100) % 10;
    int digito3 = (numero_4_digitos / 10) % 10;
    int digito4 = numero_4_digitos % 10;

    printf("%d\n", digito1);
    printf("%d\n", digito2);
    printf("%d\n", digito3);
    printf("%d\n", digito4);

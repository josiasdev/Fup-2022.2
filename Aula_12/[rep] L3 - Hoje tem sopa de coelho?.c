#include <stdio.h>

int main()
{
    int n;
    long int ultimo_valor = 1, penultimo_valor = 1;
    long int auxiliar;
    scanf("%d", &n);
    for (int i = 0; i < n - 2; i++)
    {
        auxiliar = penultimo_valor + ultimo_valor;
        penultimo_valor = ultimo_valor;
        ultimo_valor = auxiliar;
    }
    printf("%ld\n", ultimo_valor);
}
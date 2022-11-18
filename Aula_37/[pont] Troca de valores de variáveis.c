#include <stdio.h>

// Implemente a função 'troca'.
void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    troca(&x, &y);
    // Chame a função 'troca' para trocar os valores de x e y.

    printf("%d %d", x, y);
}
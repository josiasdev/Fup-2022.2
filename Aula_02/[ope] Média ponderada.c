#include <stdio.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    float media_ponderada = (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;

    printf("%f", media_ponderada);
}
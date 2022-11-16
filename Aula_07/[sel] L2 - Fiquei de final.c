#include <stdio.h>

int main()
{
    float nota1, nota2, nota_final;
    scanf("%f %f", &nota1, &nota2);
    float media = (nota1 + nota2) / 2;
    if (media >= 7)
    {
        printf("aprovado");
    }
    else if (media < 4)
    {
        printf("reprovado");
    }
    else if ((media >= 4) && (media < 7))
    {
        scanf("%f", &nota_final);
        float media_final = (media + nota_final) / 2;
        if (media_final >= 5)
        {
            printf("aprovado na final");
        }
        else
        {
            printf("reprovado na final");
        }
    }
}
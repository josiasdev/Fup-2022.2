#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota_trabalho, media = 0;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota_trabalho);
    if (((nota1 >= nota2 && nota3 <= nota2) || (nota3 <= nota1 && nota1 <= nota2) || (nota2 == nota3 && nota2 < nota1)))
    {
        media = (nota1 + nota2 + nota_trabalho) / 3;
        if (media >= 7)
        {
            printf("Aprovado com %.1f\n", media);
        }
        else if (media <= 7)
        {
            printf("Final com %.1f\n", media);
        }
    }
    else if (((nota2 >= nota1 && nota3 >= nota2) || (nota1 <= nota3 && nota1 <= nota2) || (nota1 == nota3 && nota3 <= nota2)))
    {
        media = (nota2 + nota3 + nota_trabalho) / 3;
        if (media >= 7)
        {
            printf("Aprovado com %.1f\n", media);
        }
        else if (media <= 7)
        {
            printf("Final com %.1f\n", media);
        }
    }
    else if (((nota1 >= nota2 && nota3 >= nota2) || (nota3 >= nota1 && nota1 >= nota2) || (nota1 == nota2 && nota2 < nota3)))
    {
        media = (nota1 + nota3 + nota_trabalho) / 3;
        if (media >= 7)
        {
            printf("Aprovado com %.1f\n", media);
        }
        else if (media <= 7)
        {
            printf("Final com %.1f\n", media);
        }
    }
}
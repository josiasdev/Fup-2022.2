#include <stdio.h>

typedef struct
{
    float nota[3];
    float media;
} aluno;

// Recebe um aluno passado por referência, e preenche o campo 'media' com a
// média das 3 notas do aluno.
void calcula_media(aluno *a)
{
    for (int i = 0; i < 3; i++)
    {
        float media;
        media += ((*a).nota[i]) / 3;
        (*a).media = media;
    }
}

int main()
{
    aluno a;
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &a.nota[i]);
    }
    calcula_media(&a);
    // Chame a função 'calcula_media' passando o aluno 'a' por referência.

    printf("%.1f", a.media);
}

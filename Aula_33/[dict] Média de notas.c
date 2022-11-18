#include <stdio.h>

typedef struct
{
    char nome[100];
    int matricula;
    char disciplina[100];
    float nota;
} aluno;

aluno le_aluno()
{
    aluno a;
    scanf("%[^\n]\n%d\n%[^\n]\n%f\n", a.nome, &a.matricula, a.disciplina, &a.nota);
    return a;
}

float media(aluno a, aluno b)
{
    float media = (a.nota + b.nota) / 2;
    printf("Média = %.1f", media);
    return media;
}
int main()
{
    aluno a = le_aluno();
    aluno b = le_aluno();
    media(a, b);
}
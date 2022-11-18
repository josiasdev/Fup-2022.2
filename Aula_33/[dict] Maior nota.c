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

void imprimir_resultado(aluno a, aluno b)
{
    if (a.nota > b.nota)
    {
        printf("%s , %.1f", a.nome, a.nota);
    }
    else if (a.nota < b.nota)
    {
        printf("%s , %.1f", b.nome, b.nota);
    }
    else
    {
        printf("%s e %s , %.1f", a.nome, b.nome, b.nota);
    }
}
int main()
{
    aluno a = le_aluno();
    aluno b = le_aluno();
    imprimir_resultado(a, b);
}
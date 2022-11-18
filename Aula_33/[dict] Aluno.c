#include <stdio.h>
#include <string.h>

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

void imprimir_resultado(aluno a)
{
    if (a.nota >= 7)
    {
        printf("%s aprovado(a) em %s", a.nome, a.disciplina);
    }
    else
    {
        printf("%s reprovado(a) em %s", a.nome, a.disciplina);
    }
}
int main()
{
    aluno a = le_aluno();
    imprimir_resultado(a);
}
#include <stdio.h>

typedef struct
{
    char nome[100];
    int matricula;
    char disciplina[100];
    float nota;
} aluno;

int main()
{
    aluno x;
    scanf(" %[^\n]", x.nome);
    scanf("%d", &x.matricula);
    scanf(" %[^\n]", x.disciplina);
    scanf("%f", &x.nota);

    printf("Nome = %s\n", x.nome);
    printf("Matrícula = %d\n", x.matricula);
    printf("Disciplina = %s\n", x.disciplina);
    printf("Nota = %.1f\n", x.nota);
}
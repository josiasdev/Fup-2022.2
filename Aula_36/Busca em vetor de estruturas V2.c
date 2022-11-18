#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[100];
    float media;
} aluno;

int main()
{
    int n;
    scanf("%d", &n);
    aluno turma[n];
    int aux = 0;
    float maiorMedia = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %[^\n] %f", &turma[i].matricula, turma[i].nome, &turma[i].media);
    }
    maiorMedia = turma[0].media;
    for (int i = 0; i < n; i++)
    {
        if (turma[i].media > maiorMedia)
        {
            maiorMedia = turma[i].media;
            aux = i;
        }
    }
    printf("%d\n%s\n%.1f\n", turma[aux].matricula, turma[aux].nome, turma[aux].media);
}
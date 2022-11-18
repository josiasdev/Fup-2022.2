#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[50];
    float media;
} aluno;

int main()
{
    int n;
    scanf("%d", &n);
    aluno turma[n];
    aluno aux;

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n%[^\n]\n%f", &turma[i].matricula, turma[i].nome, &turma[i].media);
    }

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (turma[j].media <= turma[j - 1].media)
            {
                aux = turma[j];
                turma[j] = turma[j - 1];
                turma[j - 1] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n%s\n%.1f\n", turma[i].matricula, turma[i].nome, turma[i].media);
    }
}
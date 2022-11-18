#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[100];
    float media;
} aluno;

void alunos_para_arquivo(aluno turma[], int n)
{
    FILE *f = fopen("alunos.txt", "w");
    if (f == 0)
    {
        printf("ERRO ao abrir o arquivo");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n%s\n%.1f\n", turma[i].matricula, turma[i].nome, turma[i].media);
    }
    fclose(f);
}

void imprime_alunos_arquivo()
{
    FILE *f = fopen("alunos.txt", "r");
    if (f == 0)
    {
        printf("ERRO ao abrir o arquivo");
        return;
    }
    aluno a;
    while (fscanf(f, "%d\n%[^\n]\n%f\n", &a.matricula, a.nome, &a.media) == 3)
    {
        printf("%s\n", a.nome);
    }
    fclose(f);
}

int main()
{
    int n, i;
    scanf("%d\n", &n);
    aluno turma[n], a;

    for (i = 0; i < n; i++)
    {
        scanf("%d\n%[^\n]\n%f\n", &a.matricula, a.nome, &a.media);
        turma[i] = a;
    }
    alunos_para_arquivo(turma, n);
    imprime_alunos_arquivo();
}
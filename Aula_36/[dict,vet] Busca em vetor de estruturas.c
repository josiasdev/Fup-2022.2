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

    for (int i = 0; i < n; i++)
    {
        scanf("%d %[^\n] %f", &turma[i].matricula, turma[i].nome, &turma[i].media);
    }
    int mat_busca;
    scanf("%d", &mat_busca);
    int encontrado = 0;
    for (int i = 0; i < n; i++)
    {
        if (turma[i].matricula == mat_busca)
        {
            printf("%s\n%.1f", turma[i].nome, turma[i].media);
            encontrado = 1;
        }
    }
    if (!encontrado)
    {
        printf("NAO ENCONTRADA");
    }
}
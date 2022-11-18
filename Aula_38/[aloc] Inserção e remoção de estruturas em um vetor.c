#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nome[50];
    float media;
} aluno;

aluno le_aluno()
{
    aluno a;
    scanf("%d\n%[^\n]\n%f\n", &a.matricula, a.nome, &a.media);
    return a;
}

/*
Recebe vetor de alunos e novo aluno, e insere o novo aluno no final do vetor.
- v: vetor de alunos
- n: tamanho do vetor de alunos (passado por referência)
- novo: novo aluno a ser inserido no final do vetor.

Pseudocódigo:
   altere o tamanho do vetor v para conter *n+1 elementos, pondo endereço em v
   se não conseguir alocar (v == 0) imprima msg de erro e retorne 0
   coloque o aluno 'novo' na última posição do vetor (posição *n)
   aumente em 1 o tamanho do vetor (incrementar *n)
   retorne v
*/
aluno *insere_aluno(aluno *v, int *n, aluno novo)
{
    v = (aluno *)realloc(v, (*n + 1) * sizeof(aluno));
    if (v == 0)
    {
        printf("ERRO: não foi possivel inserir alunos");
        return 0;
    }
    v[*n] = novo;
    (*n)++;
    return v;
}

/*
Recebe vetor de alunos, e retira do vetor o primeiro aluno com matrícula igual à
matrícula passada como parâmetro.
- v: vetor de alunos
- n: tamanho do vetor de alunos (passado por referência)
- matricula: matrícula do aluno a ser removido.

Pseudocódigo:
   para i de 0 até o tamanho do vetor menos 1
      se a matrícula do i-ésimo elemento do vetor é igual à 'matrícula' passada como parâmetro
         copie último elemento do vetor para a posição i
         realoque vetor para conter um elemento a menos, pondo endereço em v
         se não for possível realocar, imprima mensagem de erro e retorne
         reduza em 1 o tamanho do vetor (decrementar *n)
         break
   retorne o endereço de memória do vetor realocado
*/
aluno *remove_aluno(aluno *v, int *n, int matricula)
{
    for (int i = 0; i < *n; i++)
    {
        if (v[i].matricula == matricula)
        {
            v[i] = v[*n - 1];
            v = (aluno *)realloc(v, (*n - 1) * sizeof(aluno));
            if (v == 0)
            {
                printf("ERRO: não foi possivel remover alunos");
                return 0;
            }
            (*n)--;
            break;
        }
    }
    return v;
}

int main()
{
    int num_oper = 0, i, n = 0;
    scanf("%d\n", &num_oper);
    aluno *v = 0;

    for (i = 0; i < num_oper; i++)
    {
        char oper;
        scanf("%c\n", &oper);
        if (oper == 'i')
        {
            aluno a = le_aluno();
            v = insere_aluno(v, &n, a);
        }
        else
        {
            int mat;
            scanf("%d\n", &mat);
            v = remove_aluno(v, &n, mat);
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n%s\n%.1f\n", v[i].matricula, v[i].nome, v[i].media);
    }
    free(v);

    return 0;
}
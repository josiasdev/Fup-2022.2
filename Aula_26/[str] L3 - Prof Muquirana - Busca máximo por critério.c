#include <stdio.h>

int main()
{
    char notas_alunos[100];
    int testes, maior_soma2 = 0, soma2, id_maior2 = 0, id_2 = 0;
    scanf("%i", &testes);
    for (int i = 0; i < testes; i++)
    {
        scanf("%s", notas_alunos);
        soma2 = 0;
        for (int j = 2; notas_alunos[j] != 0; j++)
        {
            soma2 = soma2 + (notas_alunos[j] - '0');

            id_2 = (notas_alunos[0] - '0') * 10 + (notas_alunos[1] - '0');
            if ((soma2 > maior_soma2) || (soma2 == maior_soma2 && id_2 > id_maior2))
            {
                maior_soma2 = soma2;
                id_maior2 = id_2;
            }
        }
    }
    printf("%02i", id_maior2);
}
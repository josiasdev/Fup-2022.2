#include <stdio.h>
#include <string.h>
int main()
{
    char palavra1[100], palavra2[100];
    int tam_palavra1, tam_palavra2, auxiliar = 0;
    scanf("%s %s", palavra1, palavra2);

    tam_palavra1 = strlen(palavra1);
    tam_palavra2 = strlen(palavra2);
    if (tam_palavra1 != tam_palavra2)
    {
        printf("nao");
    }
    else
    {
        for (int i = 0; palavra1[i]; i++)
        {
            for (int j = 0; palavra1[j]; j++)
            {
                if (palavra1[j] == palavra2[i])
                {
                    auxiliar++;
                    palavra1[j] = '#';
                    break;
                }
            }
        }
        if (auxiliar != tam_palavra1)
        {
            printf("nao");
        }
        else
        {
            printf("sim");
        }
    }
}
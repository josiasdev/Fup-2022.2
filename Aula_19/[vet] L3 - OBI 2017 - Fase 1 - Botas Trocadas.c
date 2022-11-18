#include <stdio.h>

int main()
{
    int nbotas;
    scanf("%d", &nbotas);
    int botas[nbotas];
    int j, pares = 0;
    char pes[nbotas];
    for (int i = 0; i < nbotas; i++)
    {
        scanf("%d %c", &botas[i], &pes[i]);
    }
    for (int i = 0; i < nbotas - 1; i++)
    {
        j = i + 1;
        if (botas[i] != -1)
        {
            while ((j < nbotas) && ((botas[i] != botas[j]) || (pes[i] == pes[j])))
            {
                j++;
            }
            if (j < nbotas)
            {
                pares++;
                botas[j] = -1;
            }
        }
    }
    printf("%d", pares);
}
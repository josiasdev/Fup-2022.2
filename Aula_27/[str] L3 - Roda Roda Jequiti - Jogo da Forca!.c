#include <stdio.h>

int main()
{
    char frase[100];
    char chutes[100];
    char marcacao;
    scanf("%[^\n]\n%[^\n]\n%c", frase, chutes, &marcacao);
    for (int i = 0; frase[i]; i++)
    {
        if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z'))
        {
            int encontrou = 0;
            for (int j = 0; chutes[j]; j++)
            {
                if (frase[i] == chutes[j] || (frase[i] + 32) == chutes[j])
                {
                    encontrou = 1;
                }
            }
            if (1 - encontrou)
            {
                frase[i] = marcacao;
            }
        }
        printf("%c", frase[i]);
    }
}
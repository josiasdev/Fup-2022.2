#include <stdio.h>

int main()
{
    char texto[100];
    char converter;
    scanf("%[^\n] %c", texto, &converter);
    for (int i = 0; texto[i]; i++)
    {
        if (converter == 'M' && texto[i] >= 'a' && texto[i] <= 'z')
        {
            texto[i] -= 32;
        }
        if (converter == 'm' && texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] += 32;
        }
        if (converter == 'p' && (i == 0 || texto[i - 1] == ' '))
        {
            if (texto[i + 1] == ' ' && texto[i] >= 'A' && texto[i] <= 'Z')
            {
                texto[i] += 32;
            }
            if (texto[i + 1] != ' ' && texto[i] >= 'a' && texto[i] <= 'z')
            {
                texto[i] -= 32;
            }
        }
        if (converter == 'i')
        {
            if (texto[i] >= 'a' && texto[i] <= 'z')
            {
                texto[i] -= 32;
            }
            else if (texto[i] >= 'A' && texto[i] <= 'Z')
            {
                texto[i] += 32;
            }
        }
    }
    printf("%s\n", texto);
}
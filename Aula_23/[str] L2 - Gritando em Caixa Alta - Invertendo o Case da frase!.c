#include <stdio.h>

int main()
{
    char texto[100];
    scanf("%[^\n]", texto);
    for (int i = 0; texto[i] != 0; i++)
    {
        if ((texto[i] >= 'A' && texto[i] <= 'Z'))
        {
            texto[i] = texto[i] + 32;
        }
        else if ((texto[i] >= 'a' && texto[i] <= 'z'))
        {
            texto[i] = texto[i] - 32;
        }
        printf("%c", texto[i]);
    }
}
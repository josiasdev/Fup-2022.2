#include <stdio.h>

int main()
{
    char texto[100];
    scanf("%[^\n]", texto);
    for (int i = 0; texto[i]; i++)
    {
        while ((texto[i] == ' ') && (texto[i - 1] == 'a' || texto[i - 1] == 'e' || texto[i - 1] == 'i' || texto[i - 1] == 'o' || texto[i - 1] == 'u') && (texto[i - 1] == texto[i + 1]))
        {
            i = i + 2;
        }
        printf("%c", texto[i]);
    }
}
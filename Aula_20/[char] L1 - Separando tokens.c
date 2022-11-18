#include <stdio.h>

int main()
{
    char palavra;
    scanf("%c", &palavra);
    while (palavra != '\n')
    {
        if ((palavra == '#') || (palavra == ';'))
        {
            printf("\n");
        }
        else
        {
            printf("%c", palavra);
        }
        scanf("%c", &palavra);
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[100], palavra2[100];
    scanf("%s", palavra1);
    scanf("%s", palavra2);

    int fim1 = strlen(palavra1) - 1;
    int inicio2 = 0;
    while (fim1 >= 0 && inicio2 < strlen(palavra2) && palavra1[fim1] == palavra2[inicio2])
    {
        fim1--;
        inicio2++;
    }
    for (int i = 0; i <= fim1; i++)
    {
        printf("%c", palavra1[i]);
    }
    for (int i = inicio2; i < strlen(palavra2); i++)
    {
        printf("%c", palavra2[i]);
    }
}
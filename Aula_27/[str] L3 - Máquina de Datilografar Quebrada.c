#include <stdio.h>

int main()
{
    int numero = 1;
    char tecla_quebrada;
    scanf("%c", &tecla_quebrada);
    char digitos[100];
    scanf(" %[^\n]", digitos);
    for (int i = 0; digitos[i]; i++)
    {
        if (digitos[i] != tecla_quebrada)
        {
            if (digitos[i] != '0')
            {
                numero = 0;
            }
            if (numero == 0)
            {
                printf("%c", digitos[i]);
            }
        }
    }
    if (numero == 1)
    {
        printf("0");
    }
}
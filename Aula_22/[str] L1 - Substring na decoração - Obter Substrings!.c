#include <stdio.h>

void sub_string(char texto[], int caractere, int qtd_caracteres)
{
    for (int i = caractere; i <= qtd_caracteres + caractere - 1 && texto[i] != '\0'; i++)
    {
        printf("%c", texto[i]);
    }
}

int main()
{
    char texto[100];
    int caractere;
    int qtd_caracteres;
    scanf("%[^\n] %d %d", texto, &caractere, &qtd_caracteres);
    sub_string(texto, caractere, qtd_caracteres);
}
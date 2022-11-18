#include <stdio.h>

int main()
{
    char palavra_string[100];
    char cifragem1_palavra[100];
    char cifragem2_palavra[100];
    scanf("%[^\n]\n %s\n %s", palavra_string, cifragem1_palavra, cifragem2_palavra);
    for (int i = 0; palavra_string[i] != 0; i++)
    {
        for (int j = 0; cifragem1_palavra[j]; j++)
        {
            if (palavra_string[i] == cifragem1_palavra[j])
            {
                palavra_string[i] = cifragem2_palavra[j];
            }
            else if (palavra_string[i] == cifragem2_palavra[j])
            {
                palavra_string[i] = cifragem1_palavra[j];
            }
        }
    }
    printf("%s\n", palavra_string);
}
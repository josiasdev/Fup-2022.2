#include <stdio.h>

int main()
{
    int ultron, quantidade_de_ultron, elementos, contador = 0;
    scanf("%i %i", &ultron, &quantidade_de_ultron);
    for (int i = 0; i < quantidade_de_ultron; i++)
    {
        scanf("%i", &elementos);
        if (elementos == ultron)
        {
            contador++;
        }
    }
    printf("%i", contador);
}
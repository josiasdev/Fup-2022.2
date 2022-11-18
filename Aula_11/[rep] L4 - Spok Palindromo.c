#include <stdio.h>

int main()
{
    int id_planeta, id_planeta_invertido = 0;
    scanf("%d", &id_planeta);
    int auxiliar = id_planeta;
    while (auxiliar != 0)
    {
        id_planeta_invertido = (id_planeta_invertido * 10) + (auxiliar % 10);
        auxiliar = auxiliar / 10;
    }
    if (id_planeta_invertido == id_planeta)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
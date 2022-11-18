#include <stdio.h>

int main()
{
    int numero_elementos, jedi, sith, soma_jedi = 0, soma_sith = 0;
    scanf("%d", &numero_elementos);
    for (int i = 0; i < numero_elementos / 2; i++)
    {
        scanf("%d", &jedi);
        soma_jedi = soma_jedi + jedi;
    }
    for (int i = 0; i < numero_elementos / 2; i++)
    {
        scanf("%d", &sith);
        soma_sith = soma_sith + sith;
    }
    if (soma_sith > soma_jedi)
    {
        printf("Sith");
    }
    else if (soma_sith == soma_jedi)
    {
        printf("Empate");
    }
    else
    {
        printf("Jedi");
    }
}
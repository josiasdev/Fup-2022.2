#include <stdio.h>

int main()
{
    int dia, hora, minuto;
    scanf("%d %d %d", &dia, &hora, &minuto);
    if (dia == 1)
    {
        printf("NAO");
    }
    else if (dia == 2)
    {
        if (hora >= 8 && hora < 12)
        {
            printf("SIM");
        }
        else if (hora >= 14 && hora < 18)
        {
            printf("SIM");
        }
        else
        {
            printf("NAO");
        }
    }
    else if (dia == 3)
    {
        if (hora >= 8 && hora < 12)
        {
            printf("SIM");
        }
        else if (hora >= 14 && hora < 18)
        {
            printf("SIM");
        }
        else
        {
            printf("NAO");
        }
    }
    else if (dia == 4)
    {
        if (hora >= 8 && hora < 12)
        {
            printf("SIM");
        }
        else if (hora >= 14 && hora < 18)
        {
            printf("SIM");
        }
        else
        {
            printf("NAO");
        }
    }
    else if (dia == 5)
    {
        if (hora >= 8 && hora < 12)
        {
            printf("SIM");
        }
        else if (hora >= 14 && hora < 18)
        {
            printf("SIM");
        }
        else
        {
            printf("NAO");
        }
    }
    else if (dia == 6)
    {
        if (hora >= 8 && hora < 12)
        {
            printf("SIM");
        }
        else if (hora >= 14 && hora < 18)
        {
            printf("SIM");
        }
        else
        {
            printf("NAO");
        }
    }
    else if (dia == 7)
    {
        if (hora >= 8 && hora < 12)
        {
            printf("SIM");
        }
        else
        {
            printf("NAO");
        }
    }
}
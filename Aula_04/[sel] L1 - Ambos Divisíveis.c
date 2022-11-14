#include <stdio.h>

int main()
{
    int numero, numero2;
    scanf("%d %d", &numero, &numero2);
    if ((numero % 3 == 0 && numero2 % 3 == 0) || (numero % 5 == 0 && numero2 % 5 == 0))
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
}
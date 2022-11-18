#include <stdio.h>

int main()
{
    char dedo;
    int alfabeto;
    char formula;
    scanf("%d", &alfabeto);
    if (alfabeto != 0)
    {
        formula = (alfabeto - 1) % 26 + 97;
        printf("%c", formula);
    }
    else
    {
        printf("joguem de novo\n");
    }
}
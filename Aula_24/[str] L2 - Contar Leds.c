#include <stdio.h>
#include <string.h>

int main()
{

    int casos_testes;
    int leds;
    int tamanho;
    char paineis[105];

    scanf("%d", &casos_testes);

    for (int i = 0; i < casos_testes; i++)
    {
        scanf("%s", paineis);
        tamanho = strlen(paineis);
        leds = 0;
        for (int k = 0; k < tamanho; k++)
        {
            if (paineis[k] == '1')
                leds += 2;
            if (paineis[k] == '2')
                leds += 5;
            if (paineis[k] == '3')
                leds += 5;
            if (paineis[k] == '4')
                leds += 4;
            if (paineis[k] == '5')
                leds += 5;
            if (paineis[k] == '6')
                leds += 6;
            if (paineis[k] == '7')
                leds += 3;
            if (paineis[k] == '8')
                leds += 7;
            if (paineis[k] == '9')
                leds += 6;
            if (paineis[k] == '0')
                leds += 6;
        }
        printf("%d leds\n", leds);
    }
}
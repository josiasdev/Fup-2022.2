#include <stdio.h>

int main()
{
    int hora_dormir, minuto_dormir, segundo_dormir, hora_acordar, minuto_acordar, segundo_acordar;

    scanf("%d %d %d %d %d %d", &hora_dormir, &minuto_dormir, &segundo_dormir, &hora_acordar, &minuto_acordar, &segundo_acordar);
    int diferenca_de_hora = hora_acordar - hora_dormir;
    int diferenca_de_segundos = segundo_acordar - segundo_dormir;
    int diferenca_de_minutos = minuto_acordar - minuto_dormir;

    if (diferenca_de_segundos < 0)
    {
        diferenca_de_segundos = diferenca_de_segundos + 60;
        diferenca_de_minutos--;
    }
    if (diferenca_de_minutos < 0)
    {
        diferenca_de_minutos = diferenca_de_minutos + 60;
        diferenca_de_hora--;
    }
    if (diferenca_de_hora < 0)
    {
        diferenca_de_hora = diferenca_de_hora + 24;
    }
    printf("%d %d %d", diferenca_de_hora, diferenca_de_minutos, diferenca_de_segundos);
}
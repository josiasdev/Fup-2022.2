#include <stdio.h>

int main()
{
    int tempo_seg;
    scanf("%d", &tempo_seg);
    int horas = tempo_seg / 3600;
    int minutos = (tempo_seg / 60) % 60;
    int segundos = tempo_seg % 60;

    printf("%d\n", horas);
    printf("%d\n", minutos);
    printf("%d\n", segundos);
}
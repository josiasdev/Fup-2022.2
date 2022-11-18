#include <stdio.h>

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos, int *hor, int *min, int *seg)
{
    *hor = segundos / 3600;
    *min = (segundos % 3600) / 60;
    *seg = (segundos % 3600) % 60;
}

int main()
{
    int tempo, h, m, s;
    scanf("%d", &tempo);
    converte_tempo(tempo, &h, &m, &s);
    // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
    // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.

    printf("%d:%d:%d", h, m, s);
}

#include <stdio.h>

int main()
{
    int cois_huck, quantidade_de_calcas, calca_para_ser_testada, contador = 0;
    scanf("%i %i", &cois_huck, &quantidade_de_calcas);
    for (int i = 0; i < quantidade_de_calcas; i++)
    {
        scanf("%i", &calca_para_ser_testada);
        if (calca_para_ser_testada > cois_huck)
        {
            contador++;
        }
    }
    printf("%i", contador);
}
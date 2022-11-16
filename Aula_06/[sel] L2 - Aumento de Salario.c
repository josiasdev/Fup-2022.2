#include <stdio.h>

int main()
{
    float salario;
    scanf("%f", &salario);
    if (salario <= 1000)
    {
        salario = salario * 1.20;
        printf("%.2f", salario);
    }
    else if (salario <= 1500)
    {
        salario = salario * 1.15;
        printf("%.2f", salario);
    }
    else if (salario <= 2000)
    {
        salario = salario * 1.10;
        printf("%.2f", salario);
    }
    else if (salario > 2000)
    {
        salario = salario * 1.05;
        printf("%.2f", salario);
    }
}
#include <stdio.h>

float converte_para_celsius(float fahrenheit)
{
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}
int main()
{
    float fahrenheit;
    scanf("%f", &fahrenheit);
    printf("%f", converte_para_celsius(fahrenheit));
}
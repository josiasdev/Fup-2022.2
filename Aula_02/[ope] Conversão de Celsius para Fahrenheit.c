#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    scanf("%f", &celsius);
    
    fahrenheit = celsius * 9 / 5 + 32;
    
    printf("%f", fahrenheit);
}
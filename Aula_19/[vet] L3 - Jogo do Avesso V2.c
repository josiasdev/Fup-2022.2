#include <stdio.h>

int main()
{
    int n_operarios, n_gritos, gritos;
    scanf("%i %i", &n_operarios, &n_gritos);
    int operarios[n_operarios];
    for (int i = 0; i < n_operarios; i++)
    {
        scanf("%i", &operarios[i]);
    }
    for (int i = 0; i < n_gritos; i++)
    {
        scanf("%i", &gritos);
        for (int j = 0; j < n_operarios; j++)
        {
            if (operarios[j] == gritos || operarios[j] == -gritos)
            {
                if (j > 0)
                {
                    operarios[j - 1] = -operarios[j - 1];
                }
                if (j < n_operarios - 1)
                {
                    operarios[j + 1] = -operarios[j + 1];
                }
                break;
            }
        }
    }
    for (int i = 0; i < n_operarios; i++)
    {
        printf("%i ", operarios[i]);
    }
}
#include <stdio.h>

int main(void)
{
    double p, r = 0, g;
    scanf("%lf", &p);
    if (p < 0)
    {
        printf("The house price cannot be negative.\n");
    }
    else
    {
        g = 0.05 * p;
        if (p <= 350000)
        {
            r = 0.36 * g;
            if (r > 5000)
            {
                r = 5000;
            }
        }
        else if (p <= 450000)
        {
            r = 5000 * (450000 - p) / 100000;
        }
        g -= r;
        printf("%.2f\n", g);
    }

    return 0;
}
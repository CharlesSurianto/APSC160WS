#include <stdio.h>
#include <math.h>

int main(void)
{
    double f[25] = {0.00, 3.21, 5.72, 7.00, 6.81, 5.24, 2.70, -0.19, -2.76, -4.45, -4.94, -4.22, -2.55, -0.40, 1.67, 3.19, 3.86, 3.63, 2.70, 1.42, 0.19, -0.64, -0.89, -0.61, 0.00};
    for (int i = 1; i <= 4; i++)
    {
        double o = 0;
        for (int j = 1; j <= 24; j++)
        {
            o += f[j] * sin(i * j / 24.0 * M_PI);
        }
        o *= M_PI / 24.0;
        printf("%.0f", o);
    }

    return 0;
}
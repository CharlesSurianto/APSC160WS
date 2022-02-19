#include <stdio.h>

#define DATA_FILE "yvrTemperature08.dat"

int main(void)
{
    FILE *filein = fopen(DATA_FILE, "r");
    int dayCount = 0;
    double
        t[5],
        min = 1000,
        max = -1000;
    if (filein == NULL)
    {
        printf("error\n");
    }
    else
    {
        while (fscanf(filein, "%lf %lf %lf %lf %lf", &t[0], &t[1], &t[2], &t[3], &t[4]) != EOF)
        {
            if (t[3] > max)
            {
                max = t[3];
            }
            if (t[3] < min)
            {
                min = t[3];
            }
        }
        printf("min = %.1f max = %.1f\n", min, max);
    }

    return 0;
}

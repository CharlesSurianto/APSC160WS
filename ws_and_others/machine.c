#include <stdio.h>
#include <stdlib.h>

#define MAX_TEMP 300.0
#define MAX_PRESSURE 150.0
#define MIN_TEMP 5.0

int main(void)
{
    double t, p;
    printf("Enter air temperature in degrees C: ");
    scanf("%lf", &t);
    printf("Enter pressure in PSI: ");
    scanf("%lf", &p);
    if (p < 0)
    {
        printf("\nError: input not valid\n");
    }
    else if (t < MIN_TEMP || t > MAX_TEMP || p > MAX_PRESSURE || (t > 250.0 && p > 100.0))
    {
        printf("\nMachine is not operating under normal conditions!\n");
    }
    else
    {
        printf("\nMachine is operating under normal conditions!");
    }

    return 0;
}
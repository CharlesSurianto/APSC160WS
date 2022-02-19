#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WIDTH 100
#define HEIGHT 60
#define PI acos(-1.0)

int main(void)
{
    int x;
    int y;
    int deltaX;
    int deltaY;
    double temperature;

    printf("Enter grid spacing in x-direction:\n");
    scanf("%d", &deltaX);
    printf("Enter grid spacing in y-direction:\n");
    scanf("%d", &deltaY);

    for (y = HEIGHT; y >= 0; y -= deltaY)
    {
        printf("\ny =%3d:", y);
        for (x = 0; x <= WIDTH; x += deltaX)
        {
            temperature = 10 * sin(2 * PI * x / WIDTH) * cos(2 * PI * y / HEIGHT);
            printf(" %5.2f", temperature);
        }
    }

    return 0;
}
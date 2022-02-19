/*
 * Author:  
 * Date:    
 * Purpose: 
 */

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -1

int main(void)
{
    double
        big = -1,
        nextVal;

    scanf("%lf", &nextVal);
    big = nextVal;
    while (nextVal != -1)
    {
        scanf("%lf", &nextVal);
        if (big < nextVal)
        {
            big = nextVal;
        }
    }
    if (big == -1)
    {
        printf("\nError: no data!\n");
    }
    else
    {
        printf("\nLargest value entered: %.6f\n", big);
    }

    return 0;
}
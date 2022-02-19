/*
 * Author:
 *
 * Purpose: Draw a histogram of positive integers entered by a user in
 *          the range 1 to 100, inclusive.  The user terminates input
 *          with -1.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int input = -1;

    do
    {
        scanf("%d", &input);
        // printf("%d\n", (input - 1) / 10);
        if (input > 0)
        {
            count[(input - 1) / 10]++;
        }
    } while (input != -1);

    for (int i = 0; i < 10; i++)
    {
        printf("%2d - %3d: ", 10 * i + 1, (i + 1) * 10);
        for (int j = 0; j < count[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
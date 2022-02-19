#include <stdio.h>

int getInputInRange(int, int);

int main(void)
{
    printf("%d\n", getInputInRange(1, 5));
    return 0;
}

/*
 * Prompts user to enter an integer
 * between min and max, inclusive.  Prints an
 * error message and repeatedly prompts for
 * input, if input is outside required range.
 *
 * Param: min - minimum acceptable input
 * Param: max - maximum acceptable input
 * Returns: number between min and max, inclusive,
 * entered by user.
 */
int getInputInRange(int min, int max)
{
    int num;
    do
    {
        scanf("%d", &num);
    } while (num < min || num > max);
    return num;
}
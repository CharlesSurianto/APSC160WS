#include <stdio.h>

int factorial(int);
int choose(int, int);
int getInputInRange(int, int);

int main(void)
{
    int nRows;
    printf("Please enter integer value between 1 and 12: ");
    nRows = getInputInRange(1, 12);

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" %3d", choose(i, j));
        }
        printf("\n");
    }

    return 0;
}

int getInputInRange(int min, int max)
{
    int num;
    do
    {
        scanf("%d", &num);
    } while (num < min || num > max);
    return num;
}

int factorial(int n)
{
    int o = 1;
    for (int i = 2; i <= n; i++)
    {
        o *= i;
    }
    return o;
}

int choose(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
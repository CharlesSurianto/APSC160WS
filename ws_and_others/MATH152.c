#include <stdio.h>
#include <math.h>

void zero(int n, double m[])
{
    for (int i = n; i >= 0; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            /* code */
        }
        
    }
    
}

int main(void)
{
    const int row = 4, col = 5;
    double ma[row][col] = {
        {9, -5, -4, -1, 6},
        {-5, 13, -2, 0, 0},
        {-4, -2, 10, 1, 0},
        {1, 0, -1, 0, 12}};

    for (int i = 0; i < row; i++)
    {
        zero(i, ma);
    }

    return 0;
}
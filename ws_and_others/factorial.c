#include <stdio.h>

int factorial(int);

int main(void)
{
    int input, output;
    scanf("%d", &input);
    output = factorial(input);
    printf("%d", output);
    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    return 1;
}

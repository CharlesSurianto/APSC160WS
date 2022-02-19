#include <stdio.h>

int factorial(int);
int choose(int, int);

int main(void)
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", choose(n, r));
    return 0;
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
#include <stdio.h>
#include <math.h>

// right riemann
double r(int a, int b, int n, double (*f)(double))
{
    double o = 0, dx = (double)(b - a) / n;
    for (int i = 1; i <= n; i++)
    {
        o += f(i * dx + a);
    }
    o *= dx;
    return o;
}

// left riemann
double l(int a, int b, int n, double (*f)(double))
{
    double o = 0, dx = (double)(b - a) / n;
    for (int i = 0; i < n; i++)
    {
        o += f(i * dx + a);
    }
    o *= dx;
    return o;
}

// trapezoidal
double t(int a, int b, int n, double (*f)(double))
{
    double o = 0, dx = (double)(b - a) / n;
    o += f(a) + f(b);
    for (int i = 1; i < n; i++)
    {
        o += 2 * f(i * dx + a);
    }
    o *= dx / 2;
    return o;
}

// simpson's rule
double s(int a, int b, int n, double (*f)(double))
{
    double o = 0, dx = (double)(b - a) / n;
    o += f(a) + f(b);
    for (int i = 1; i < n; i += 2)
    {
        o += 4 * f(i * dx + a);
    }
    for (int i = 2; i < n; i += 2)
    {
        o += 2 * f(i * dx + a);
    }
    o *= dx / 3;
    return o;
}

// f(x)
double f(double x)
{
    return 4 * sqrt(1 - x * x);
}

int main(void)
{
    int
        a = 0,
        b = 1,
        n = 40;
    printf("R(%d) = %.16f\n", n, r(a, b, n, f));
    printf("L(%d) = %.16f\n", n, l(a, b, n, f));
    printf("T(%d) = %.16f\n", n, t(a, b, n, f));
    printf("S(%d) = %.16f\n", n, s(a, b, n, f));
    return 0;
}
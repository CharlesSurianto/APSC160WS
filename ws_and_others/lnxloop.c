#include <stdio.h>
#include <math.h>

int main(void)
{
	double
		x = 0.0,
		lnx = 0.0,
		term;
	int n = 1;

	printf("Please enter value of x (0 < x < 2): ");
	scanf("%lf", &x);

	term = x - 1;

	while (fabs(term) >= 0.000001)
	{
		lnx += term;
		n++;

		// term = pow(-1, n + 1) * pow(x - 1, n) / n;
		term = 1;
		for (int i = 0; i < n + 1; i++)
		{
			term *= -1;
		}
		for (int i = 0; i < n; i++)
		{
			term *= x - 1;
		}
		term /= n;
	}

	printf("Approximation to ln(%f) is %f\n", x, lnx);
	printf("- computed using %d terms", n - 1);

	return 0;
}

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

	term = pow(-1, n + 1) * pow(x - 1, n) / n;
	while (fabs(term) >= pow(10, -6))
	{
		lnx += term;
		n++;
		term = pow(-1, n + 1) * pow(x - 1, n) / n;
	}
	
	printf("Approximation to ln(%f) is %f\n", x, lnx);
	printf("- computed using %d terms", n - 1);

	return 0;
}
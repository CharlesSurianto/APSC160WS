#include <stdio.h>
#include <math.h>

int main(void)
{
	double base = 1.5;
	int exponent = 3;

	// using pow() function
	double outputPow = pow(base, exponent);

	// using loop
	double outputLoop = 1;
	for (int i = 0; i < exponent; i++)
	{
		outputLoop *= base;
	}

	// or with while loop
	double outputWLoop = 1;
	int i = 0;
	while (i < exponent)
	{
		outputWLoop *= base;
		i++;
	}

	printf("%f\n%f\n%f\n", outputPow, outputLoop, outputWLoop);

	return 0;
}
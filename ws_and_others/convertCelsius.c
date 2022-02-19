#include <stdio.h>
#include <math.h>

int main(void)
{
	double s, i;
	int n;
	scanf("%lf %lf", &s, &i);
	do
	{
		scanf("%d", &n);
		if (n < 0)
		{
			printf("error\n");
		}
	} while (n <= 0);
	for (int c = 0; c < n; c++)
	{
		printf("%.2f\t%.2f\n", s + c * i, 32 + 9.0 / 5.0 * (s + c * i));
	}

	return 0;
}
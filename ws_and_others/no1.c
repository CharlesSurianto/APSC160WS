#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("Enter three unique integers (no duplicates):\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b)
	{
		if (b > c)
		{
			printf("No");
		}
		else if (a > c)
		{
			printf("No");
		}
		else
		{
			printf("No");
		}
	}
	else if (a > c)
	{
		printf("Yes");
	}
	else if (b > c)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;
}
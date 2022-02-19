#include <stdio.h>

int main(void)
{
	int Size = -1;
	while (Size < 1 || Size > 9)
	{
		scanf("%d", &Size);
	}
	for (int i = 1, j = Size - 1; i <= Size; i++, j--)
	{
		for (int k = 0; k < j; k++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}
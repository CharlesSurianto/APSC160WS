#include <stdio.h>
#include <math.h>

int main(void)
{
	double number, accumulator;
	char operator;

	printf("Begin Calculations\n");
	do
	{
		scanf("%lf %c", &number, &operator);
		switch (operator)
		{
		case 'E':
			break;
		case 'S':
			accumulator = number;
			break;
		case '+':
			accumulator += number;
			break;
		case '-':
			accumulator -= number;
			break;
		case '*':
			accumulator *= number;
			break;
		case '/':
			if (number != 0)
			{
				accumulator /= number;
			}
			else
			{
				printf("Can't divide by zero\n");
			}
			break;
		default:
			printf("Unknown operator\n");
			break;
		}
		printf("= %f\n", accumulator);

	} while (operator!= 'E');
	printf("End of Calculations.");

	return 0;
}

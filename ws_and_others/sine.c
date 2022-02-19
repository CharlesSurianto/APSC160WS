/* Author:   
 * Date:     
 * Purpose:  Prompt a user for a positive integer N. Then,
 *           write to the file "sineTable.dat" a table of
 *           sine values for the input values:
 *           PI/N, 2*PI/N, ..., N*PI/N.
 *           
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define OUTPUTFILE "sineTable.dat"
#define PI acos(-1.0)

int main(void)
{
	FILE *out = fopen(OUTPUTFILE, "w");
	int N;
	scanf("%d", &N);
	fprintf(out, "    x sin(x)\n");
	for (int i = 1; i <= N; i++)
	{
		fprintf(out, "%.3f %.4f\n", i * PI / N, sin(i * PI / N));
	}
	fclose(out);

	return 0;
}
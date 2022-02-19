/* Author:   
 * Date:     
 * Purpose:  Reads an image file in grayscale format
 *           and generates a new image file with increased brightness
 *           
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INPUTFILE "input.pgm"
#define OUTPUTFILE "output.pgm"

int main(void)
{
	FILE *inFile;
	FILE *outFile;
	int width, height, white, inPixel, outPixel;

	inFile = fopen(INPUTFILE, "r");
	outFile = fopen(OUTPUTFILE, "w");

	fscanf(inFile, "%d %d %d", &width, &height, &white);
	fprintf(outFile, "%d %d %d\n", width, height, white);
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			fscanf(inFile, "%d", &inPixel);
			outPixel = white * sqrt((double)inPixel / white);
			fprintf(outFile, "%d ", outPixel);
		}
		fprintf(outFile, "\n");
	}

	return 0;
}
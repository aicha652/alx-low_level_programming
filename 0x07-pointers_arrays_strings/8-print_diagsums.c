#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 */
void print_diagsums(int *a, int size)
{
	int j, k, sum = 0;

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			if (j == k)
			{
				sum = sum + a[j][k];
			}
			else
			{
				continue;
			}
		}
	}
	printf("%d", sum);
	printf("\n");
}


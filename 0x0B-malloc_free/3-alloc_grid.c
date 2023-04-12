#include "main.h"
/**
 * **alloc_grid - function that returns a pointer
 * @width: width of the array
 * @height: height of the array
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k[100];
	/*k = malloc (width * height * sizeof(int));*/

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			k[j] = 0;
			printf("%d ", k[j]);
		}
		printf("\n");
	}
	printf("\n");
	return (0);
}

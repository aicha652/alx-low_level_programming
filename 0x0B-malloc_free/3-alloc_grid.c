#include "main.h"
/**
 * **alloc_grid - function that returns a pointer
 * @width: width of the array
 * @height: height of the array
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k[1000], grid[1000][1000];
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

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (i == height || j == width)
			{
				printf("%d", grid[i][j]);
			}
			else
			{
				for (j = 0; j < width; j++)
				{
					grid[i][j] = 0;
					printf("%d ", *grid[j]);
				}
				printf("\n");
			}
		}
	}
	return (0);
}

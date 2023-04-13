#include "main.h"
/**
 * *malloc_checked - function that allocates memory
 * @b: int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	
	ptr = (int *)malloc(b * sizeof(int));
	return (ptr);
	free (ptr);
	printf("98");
}

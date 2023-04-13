#include "main.h"
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: elemnts of an array
 * @size: size of an array
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = (int *)calloc(size, sizeof(int));
	(void)nmemb;
	if (ptr == NULL)
		return NULL;
	return 0;
}

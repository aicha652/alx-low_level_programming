#include "main.h"
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: elemnts of an array
 * @size: size of an array
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);

	/*if (nmemb == 0 || size == 0)
		return NULL;
	else
	{
		printf("%d", *ptr);
	}*/
	printf("%d", *ptr);
	return (0);
}

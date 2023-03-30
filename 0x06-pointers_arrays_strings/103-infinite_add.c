#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: Second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, size_t size_r)
{
	*r = *n1 + *n2;
	printf("%s", r);
	if (size_r < strlen(n1) || size_r < strlen(n2))
		return (0);
	return (0);
}

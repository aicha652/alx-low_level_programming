#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: Second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r = n1 + n2;
	printf("%s", r);
	return (0);
}

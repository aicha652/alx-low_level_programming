#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: binary to be changed
 * Return: the coverted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j = j * 2 + (b[i] - '0');
	}
	return (j);
}

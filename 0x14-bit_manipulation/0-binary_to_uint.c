#include "main.h"
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i;
	unsigned int s = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < strlen(b) && b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			s = s * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (s);
}

#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size: size of the array
 * @c: array of this characters
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

s = (char *) malloc(size * sizeof(char));
if (s == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	s[i] = c;
}
return (s);
}

#include "main.h"
/**
 * *_strdup - function that returns a pointer
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	return (s);
}

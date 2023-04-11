#include "main.h"
/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenation of two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *s =  malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (s1 == NULL && s2 != NULL)
	{
		return (s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		return (s1);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		s = strcat(s1, s2);
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			return (s);
		}
	}
	return (0);

}

#include "main.h"
/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenation of two strings
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		strcat(s1, s2);
		return (s1);
	}
	return (0);
}

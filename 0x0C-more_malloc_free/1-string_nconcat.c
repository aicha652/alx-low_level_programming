#include "main.h"
/**
 * *string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(*s1) + sizeof(*s2) * n);

	if (s2 == NULL || n == 0)
		{
			return (s1);
		}
	else
	{
		for (i = 0; i < n && s2[i] != '\0'; i++)
		{
			s1[strlen(s1) + i] = s2[i];
		}
		s1[strlen(s1) + i] = '\0';
	}
	return (ptr);
}

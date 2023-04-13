#include "main.h"
/**
 * *string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		s1[strlen(s1) + i] = s2[i];
	}
	s1[strlen(s1) + i] = '\0';
	return s1;
}

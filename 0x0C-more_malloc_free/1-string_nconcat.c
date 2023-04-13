#include "main.h"
/**
 * *string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*char *ptr;*/

	/*ptr = malloc(s1 * s2 * n *sizeof(char));*/

	strncat(s1, s2, n);
	/*printf("%s", s1);*/
       	puts (s1);
	return (0);
}

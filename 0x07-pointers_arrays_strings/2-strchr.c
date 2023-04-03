#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @c: character
 * @s: string
 * Return: pointer to the first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
char *ch = strrchr(s, c);

if (ch)
	return (ch);
else
	return (0);
}

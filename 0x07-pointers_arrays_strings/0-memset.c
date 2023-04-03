#include "main.h"
/**
 * _memset - function that fils memory with a constatnt byte
 * @n: first n bytes to be fills
 * @b: constant byte
 * @s: character
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	puts(s);
	return (0);
}


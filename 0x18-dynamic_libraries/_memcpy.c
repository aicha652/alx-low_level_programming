#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @n: n bytes to be copied
 * @src: First char
 * @dest: Second char
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

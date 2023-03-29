#include "main.h"
/*
 * *_strcat - function that concatenates two strings
 * @str: First string
 * @dest: second string
 */
char *_strcat(char *dest, char *src)
{
	size_t i;
	for (i = 1; i <= strlen(src) && src[i] != '\0';)
	{
		dest[strlen(dest) + i ] = src[i];
		i++;
	}
	dest[strlen(dest) + i] = '\0';
	return (dest);
	printf("\n");
}

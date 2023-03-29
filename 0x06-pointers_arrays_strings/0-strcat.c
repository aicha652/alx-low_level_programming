#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: First string
 * @dest: Second string
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;

for (i = 0 ; i < strlen(src) && src[i] != '\0' ; i++)
{
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
}
return dest;
}
